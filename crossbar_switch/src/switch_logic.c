#include "c_switch.h"

char port_translation(int i, int j)
{
	if(i == 0 && j == 0)
		return '0';
	else if(i == 0 && j == 1)
		return '1';
	else if(i == 0 && j == 2)
		return '2';
	else if(i == 0 && j == 3)
		return '3';
	else if(i == 1 && j == 0)
		return '4';
	else if(i == 1 && j == 1)
		return '5';
	else if(i == 1 && j == 2)
		return '6';
	else if(i == 1 && j == 3)
		return '7';
	else if(i == 2 && j == 0)
		return '8';
	else if(i == 2 && j == 1)
		return '9';
	else if(i == 2 && j == 2)
		return 'A';
	else if(i == 2 && j == 3)
		return 'B';
	else if(i == 3 && j == 0)
		return 'C';
	else if(i == 3 && j == 1)
		return 'D';
	else if(i == 3 && j == 2)
		return 'E';
	else if(i == 3 && j == 3)
		return 'F';
}

void switch_logic(void)
{
	int i, j;
	char port_bit_out, port_bit_in;
	char flag_matrix[PORTS][SLOTS];
	
	memset(flag_matrix, '0', sizeof(flag_matrix));
	memset(data_out, '0', sizeof(data_out));
	
	for(i = PORTS - 1; i >= 0 ; i--)
	{
		for(j = SLOTS - 1; j >= 0; j--)
		{
			data_out[i][j][4] = 0;
			if(data_in[i][j][0] == '0')
			{
				continue;
			}
			port_bit_out = data_in[i][j][1];
			port_bit_in = port_translation(i, j);
			
			switch(port_bit_out)
			{
				case '0':	if(flag_matrix[0][0] == '0')
							{
								data_out[0][0][0] = '1';
								data_out[0][0][1] = port_bit_in;
								data_out[0][0][2] = data_in[i][j][2];
								data_out[0][0][3] = data_in[i][j][3];
								flag_matrix[0][0] = '1';
							}
							continue;
				case '1':	if(flag_matrix[0][1] == '0')
							{
								data_out[0][1][0] = '1';
								data_out[0][1][1] = port_bit_in;
								data_out[0][1][2] = data_in[i][j][2];
								data_out[0][1][3] = data_in[i][j][3];
								flag_matrix[0][1] = '1';
							}
							continue;
				case '2':	if(flag_matrix[0][2] == '0')
							{
								data_out[0][2][0] = '1';
								data_out[0][2][1] = port_bit_in;
								data_out[0][2][2] = data_in[i][j][2];
								data_out[0][2][3] = data_in[i][j][3];
								flag_matrix[0][2] = '1';
							}
							continue;
				case '3':	if(flag_matrix[0][3] == '0')
							{
								data_out[0][3][0] = '1';
								data_out[0][3][1] = port_bit_in;
								data_out[0][3][2] = data_in[i][j][2];
								data_out[0][3][3] = data_in[i][j][3];
								flag_matrix[0][3] = '1';
							}
							continue;
				case '4':	if(flag_matrix[1][0] == '0')
							{
								data_out[1][0][0] = '1';
								data_out[1][0][1] = port_bit_in;
								data_out[1][0][2] = data_in[i][j][2];
								data_out[1][0][3] = data_in[i][j][3];
								flag_matrix[1][0] = '1';
							}
							continue;
				case '5':	if(flag_matrix[1][1] == '0')
							{
								data_out[1][1][0] = '1';
								data_out[1][1][1] = port_bit_in;
								data_out[1][1][2] = data_in[i][j][2];
								data_out[1][1][3] = data_in[i][j][3];
								flag_matrix[1][1] = '1';
							}
							continue;
				case '6':	if(flag_matrix[1][2] == '0')
							{
								data_out[1][2][0] = '1';
								data_out[1][2][1] = port_bit_in;
								data_out[1][2][2] = data_in[i][j][2];
								data_out[1][2][3] = data_in[i][j][3];
								flag_matrix[1][2] = '1';
							}
							continue;
				case '7':	if(flag_matrix[1][3] == '0')
							{
								data_out[1][3][0] = '1';
								data_out[1][3][1] = port_bit_in;
								data_out[1][3][2] = data_in[i][j][2];
								data_out[1][3][3] = data_in[i][j][3];
								flag_matrix[1][3] = '1';
							}
							continue;
				case '8':	if(flag_matrix[2][0] == '0')
							{
								data_out[2][0][0] = '1';
								data_out[2][0][1] = port_bit_in;
								data_out[2][0][2] = data_in[i][j][2];
								data_out[2][0][3] = data_in[i][j][3];
								flag_matrix[2][0] = '1';
							}
							continue;
				case '9':	if(flag_matrix[2][1] == '0')
							{
								data_out[2][1][0] = '1';
								data_out[2][1][1] = port_bit_in;
								data_out[2][1][2] = data_in[i][j][2];
								data_out[2][1][3] = data_in[i][j][3];
								flag_matrix[2][1] = '1';
							}
							continue;
				case 'A':	if(flag_matrix[2][2] == '0')
							{
								data_out[2][2][0] = '1';
								data_out[2][2][1] = port_bit_in;
								data_out[2][2][2] = data_in[i][j][2];
								data_out[2][2][3] = data_in[i][j][3];
								flag_matrix[2][2] = '1';
							}
							continue;
				case 'B':	if(flag_matrix[2][3] == '0')
							{
								data_out[2][3][0] = '1';
								data_out[2][3][1] = port_bit_in;
								data_out[2][3][2] = data_in[i][j][2];
								data_out[2][3][3] = data_in[i][j][3];
								flag_matrix[2][3] = '1';
							}
							continue;
				case 'C':	if(flag_matrix[3][0] == '0')
							{
								data_out[3][0][0] = '1';
								data_out[3][0][1] = port_bit_in;
								data_out[3][0][2] = data_in[i][j][2];
								data_out[3][0][3] = data_in[i][j][3];
								flag_matrix[3][0] = '1';
							}
							continue;
				case 'D':	if(flag_matrix[3][1] == '0')
							{
								data_out[3][1][0] = '1';
								data_out[3][1][1] = port_bit_in;
								data_out[3][1][2] = data_in[i][j][2];
								data_out[3][1][3] = data_in[i][j][3];
								flag_matrix[3][1] = '1';
							}
							continue;
				case 'E':	if(flag_matrix[3][2] == '0')
							{
								data_out[3][2][0] = '1';
								data_out[3][2][1] = port_bit_in;
								data_out[3][2][2] = data_in[i][j][2];
								data_out[3][2][3] = data_in[i][j][3];
								flag_matrix[3][2] = '1';
							}
							continue;
				case 'F':	if(flag_matrix[3][3] == '0')
							{
								data_out[3][3][0] = '1';
								data_out[3][3][1] = port_bit_in;
								data_out[3][3][2] = data_in[i][j][2];
								data_out[3][3][3] = data_in[i][j][3];
								flag_matrix[3][3] = '1';
							}
							continue;
				default :	printf("Discarded data\n");
			}
		}
	}
}
