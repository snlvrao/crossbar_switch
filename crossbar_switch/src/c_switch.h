#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <glib.h>
#define PORTS 4
#define SLOTS 4
#define DATA_SIZE 5
#define BUFFER_LINE_SIZE 21
#define GENERATED_INPUT "generated_input.txt"
#define OUTPUT_FILE "output_data.txt"

char data_in[DATA_SIZE][DATA_SIZE][DATA_SIZE];
char data_out[DATA_SIZE][DATA_SIZE][DATA_SIZE];

void read_input(char *file);
void generate_input(int data_sets);
void switch_logic(void);
void write_output(void);
void print_tuple(char *str);
