#include "c_switch.h"

int main(int argc, char *argv[])
{
	int i, data_sets, opt;
	
	if(argc < 2)
	{
		printf("Insufficient arguments\n");
		exit(1);
	}
	
	printf("Enter number of data sets\n");
	scanf("%d", &data_sets);
	
	printf("\n1 - Read from input file\n2 - Generate random input\n");
	scanf("%d", &opt);
	
	for(i = 0; i < data_sets; i++)
	{
		if(opt == 1)
		{
			/* Read inputs from file */
			read_input(argv[1]);
		}
		else if(opt == 2)
		{
			/* Generate random input to file */
			generate_input(data_sets);
		}
		
		/* Invoke switching logic */
		switch_logic();
		
		/* Write outputs to file */
		write_output();
	}
}
