CC=gcc
CFLAGS=-Wall -Wextra -std=c99

all: program tests

program: src/main.c src/longest.c
	$(CC) $(CFLAGS) tests/tests.c src/longest.c -o tests/tests

run_tests:
	./tests/tests

clean:
	rm -f program tests/tests