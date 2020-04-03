CC=gcc
CFLAGS= `pkg-config --cflags --libs glib-2.0`
ODIR= bin
SRC= src
INPUT= input_data.txt
G_INPUT= generated_input.txt
OUTPUT= output_data.txt
C_SWITCH= c_switch

install:
	mkdir ./bin
	$(CC) -o ./$(ODIR)/$(C_SWITCH) $(SRC)/*.c $(CFLAGS)

clean:
	rm -rf ./$(ODIR)
	rm -rf ./$(G_INPUT)
	rm -rf ./$(OUTPUT)

runSRC:
	./$(ODIR)/$(C_SWITCH) ./$(INPUT)
