
CXX = gcc
CXXFLAGS = -Wall -Wextra -std=c11

TARGET = criptografar
SOURCE = criptografar.c

.SILENT:

all: $(TARGET) run

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

run:
	./$(TARGET) < teste.in > teste.out chave.out

clean:
	del /Q $(TARGET).exe 2>NUL || exit 0


