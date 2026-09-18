
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = criptografar
SOURCE = criptografar.c

.SILENT:

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

test:
	./$(TARGET) <teste.in> teste.out chave.out

clean:
	del /Q $(TARGET).exe 2>NUL || exit 0
