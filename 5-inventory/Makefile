HEADERS=parsexec.h object.h noun.h misc.h location.h
OBJECTS=parsexec.o object.o noun.o misc.o location.o main.c
CC=gcc
CFLAGS=-ansi -Wall -pedantic
LFLAGS=

all:rpg
rpg: $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o rpg.exe

%.o:%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<

debug:CFLAGS=-ansi -Wall -pedantic -g
debug:clean rpg

sanitize:CFLAGS=-ansi -Wall -pedantic -fsanitize=address -g
sanitize:clean all

.PHONEY:clean
clean:
	rm -f *o rpg *~
