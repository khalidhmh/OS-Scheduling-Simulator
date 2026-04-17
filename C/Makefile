CC = gcc
CFLAGS = -Wall -Wextra -O2

all: scheduler_engine

scheduler_engine: main.c rr.c srtf.c scheduler.h
	$(CC) $(CFLAGS) -o scheduler_engine main.c rr.c srtf.c

clean:
	rm -f scheduler_engine
