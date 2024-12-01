CC = gcc
#CFLAGS = -Wall -Wextra -std=c99
DOB = read_file_to_buf.o gen_error.o parse_post.o

C_FILES := $(wildcard *.c)
OBJ_FILES  = $(patsubst %.c, %.o, $(C_FILES))
LIBS_C_FILES := $(filter-out read_file_to_buf.c gen_error.c parse_post.c, $(C_FILES))
SO_FILES = $(patsubst %.c, %.so, $(LIBS_C_FILES))

all: $(SO_FILES) libgenerror.so

#gcc --shared -o названиеБиблиотеки.so названиеИсходногоКода.c read_file_to_buf.c 

%.so: %.o $(DOB)
	$(CC) -shared -o $@ $^

libgenerror.so: gen_error.o
	$(CC) -shared -o libgenerror.so gen_error.o

%.o: %.c
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<

clean:
	rm -f *.so *.o