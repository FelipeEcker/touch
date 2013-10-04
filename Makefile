# Makefile

CC		= gcc
FLAG	= -O2 -Wall -Werror

touch: touch.c
	$(CC) $(FLAG) -o touch touch.c

clean:
	rm -rf touch

