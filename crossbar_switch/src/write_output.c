#include "c_switch.h"

void write_output(void)
{
	int i, j;
	static int set_count = 0, first = 1;
	char *buffer = (char *)malloc(BUFFER_LINE_SIZE);
	FILE *filePointer;
	
	printf("\nOutput set %d : \n", set_count + 1);
	for(i = 0; i < PORTS; i++)
	{
		for(j = 0; j < SLOTS; j++)
		{
			printf("%s ", data_out[i][j]);
		}
		printf("\n");
	}
	
	filePointer = fopen(OUTPUT_FILE, "a+");
	if(filePointer == NULL)
	{
		perror("fopen");
		exit(1);
	}
	
	//fseek(filePointer, set_count * PORTS * (BUFFER_LINE_SIZE - 1), SEEK_SET);
	if(!first)
	{
		fprintf(filePointer, "\n");
	}
	for(i = 0; i < PORTS; i++)
	{
		buffer = g_strjoin(" ", data_out[i][0], data_out[i][1], data_out[i][2], data_out[i][3], NULL);
		fprintf(filePointer, "%s\n", buffer);
	}
	first = 0;
	set_count++;
	
	fclose(filePointer);
}

