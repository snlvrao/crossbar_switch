#include "c_switch.h"

void read_input(char *file)
{
	int i = 0;
	static int set_count = 0, first = 1;
	FILE *filePointer;
	char *buffer = (char *)malloc(BUFFER_LINE_SIZE);
	
	filePointer = fopen(file, "r");
	if(filePointer == NULL)
	{
		perror("fopen");
		exit(1);
	}
	
	printf("\nInput set %d : \n", set_count + 1);
	fseek(filePointer, set_count * PORTS * (BUFFER_LINE_SIZE - 1), SEEK_SET);
	if(!first)
	{
		fgets(buffer, BUFFER_LINE_SIZE, filePointer);
	}
	while(i != PORTS) 
	{
		fgets(buffer, BUFFER_LINE_SIZE, filePointer);
		sscanf(buffer, "%s %s %s %s", data_in[i][0], data_in[i][1], data_in[i][2], data_in[i][3]);
		printf("%s", buffer);
		i++;
		first = 0;
	}
	set_count++;
	
	fclose(filePointer);
}
