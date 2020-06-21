CFLAGS += -Wall -pedantic -O3 -c

.PHONY: ModernMemAlloc

ModernMemAlloc:
	$(CC) $(CFLAGS) -o ModernMemAlloc.o $(wildcard *.c)

run: ModernMemAlloc
	./ModernMemAlloc
