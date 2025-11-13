CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGET = lagrange
OBJ = main.o lagrange.o

# ============================
#  Regra principal
# ============================
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) -lm

# ============================
#  Compilação dos módulos
# ============================
main.o: main.c lagrange.h
	$(CC) $(CFLAGS) -c main.c

lagrange.o: lagrange.c lagrange.h
	$(CC) $(CFLAGS) -c lagrange.c

# ============================
#  Executar
# ============================
run: $(TARGET)
	./$(TARGET)

# ============================
#  Limpeza
# ============================
clean:
	rm -f *.o $(TARGET)
