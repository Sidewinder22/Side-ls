clang="/home/${USER}/Dev/Tools/llvm-project/build/bin/clang++"

# Variables
CC = $(clang)
CFLAGS = -Wall -Wextra -std=c++20
TARGET = Side-ls

all: $(TARGET)

$(TARGET): Format.o Format-impl.o Filesystem.o Filesystem-impl.o main.o
	$(CC) main.o Format.o Format-impl.o Filesystem.o Filesystem-impl.o -o $(TARGET) 

# Main
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -fprebuilt-module-path=. -c -o main.o

# Format
Format-impl.o: Format-impl.cpp Format.pcm
	$(CC) $(CFLAGS) Format-impl.cpp -fmodule-file=Format=Format.pcm -c -o Format-impl.o

Format.o: Format.pcm
	$(CC) $(CFLAGS) Format.pcm -c -o Format.o

Format.pcm: Format.cppm
	$(CC) $(CFLAGS)	Format.cppm --precompile -o Format.pcm

# Filesystem
Filesystem-impl.o: Filesystem-impl.cpp Filesystem.pcm
	$(CC) $(CFLAGS) Filesystem-impl.cpp -fmodule-file=Filesystem=Filesystem.pcm -fprebuilt-module-path=. -c -o Filesystem-impl.o

Filesystem.o: Filesystem.pcm
	$(CC) $(CFLAGS) Filesystem.pcm -c -o Filesystem.o

Filesystem.pcm: Filesystem.cppm
	$(CC) $(CFLAGS) Filesystem.cppm --precompile  -o Filesystem.pcm


# Clean
clean:
	rm *.pcm *.o Side-ls
