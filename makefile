
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = criptografia
SOURCE = criptografia.c

.SILENT:

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

clean:
	del /Q $(TARGET).exe 2>NUL || exit 0
