#include "c_switch.h"

char dec_to_hex(int i)
{
	if(i == 0)
		return '0';
	else if(i == 1)
		return '1';
	else if(i == 2)
		return '2';
	else if(i == 3)
		return '3';
	else if(i == 4)
		return '4';
	else if(i == 5)
		return '5';
	else if(i == 6)
		return '6';
	else if(i == 7)
		return '7';
	else if(i == 8)
		return '8';
	else if(i == 9)
		return '9';
	else if(i == 10)
		return 'A';
	else if(i == 11)
		return 'B';
	else if(i == 12)
		return 'C';
	else if(i == 13)
		return 'D';
	else if(i == 14)
		return 'E';
	else if(i == 15)
		return 'F';
}

void generate_input(int data_sets)
{
	int i, j, k;
	static int set_count = 0, first = 1;
	FILE *filePointer;
	char *buffer = (char *)malloc(BUFFER_LINE_SIZE);
	
	filePointer = fopen(GENERATED_INPUT, "a+");
	if(filePointer == NULL)
	{
		perror("fopen");
		exit(1);
	}

	printf("\nInput set %d : \n", set_count + 1);
	fseek(filePointer, 0, SEEK_END);
	if(!first)
	{
		fprintf(filePointer, "\n");
	}
	srand(time(0));
	for(i = 0; i < PORTS; i++)
	{
		for(j = 0; j < SLOTS; j++)
		{
			data_in[i][j][0] = dec_to_hex(rand() % 2);
			data_in[i][j][1] = dec_to_hex(rand() % 16);
			data_in[i][j][2] = dec_to_hex(j + 10);
			data_in[i][j][3] = dec_to_hex(i + 1);
		}
		buffer = g_strjoin(" ", data_in[i][0], data_in[i][1], data_in[i][2], data_in[i][3], NULL);
		fprintf(filePointer, "%s\n", buffer);
		printf("%s\n", buffer);
	}
	first = 0;
	set_count++;
	
	fclose(filePointer);
}
