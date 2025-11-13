CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGET = taylor
OBJ = main.o taylor.o

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) -lm

main.o: main.c taylor.h
	$(CC) $(CFLAGS) -c main.c

taylor.o: taylor.c taylor.h
	$(CC) $(CFLAGS) -c taylor.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)

.PHONY: run clean
