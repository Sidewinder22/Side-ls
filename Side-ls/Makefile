clang="/home/${USER}/Priv/Tools/llvm-project/build/bin/clang++"

all:
	# Precompiling the module
	${clang} -std=c++20 Format.cppm --precompile -o Format.pcm
	${clang} -std=c++20 Format-impl.cpp -fmodule-file=Format=Format.pcm -c -o Format-impl.o
	${clang} -std=c++20 Filesystem.cppm --precompile  -o Filesystem.pcm
	${clang} -std=c++20 Filesystem-impl.cpp -fmodule-file=Filesystem=Filesystem.pcm -fprebuilt-module-path=. -c -o Filesystem-impl.o

	# Precompiling the main
	${clang} -std=c++20 main.cpp -fprebuilt-module-path=. -c -o main.o

	# Compiling the module and linking it together
	${clang} -std=c++20 Format.pcm -c -o Format.o
	${clang} -std=c++20 Filesystem.pcm -c -o Filesystem.o
	${clang} main.o Format.o Format-impl.o Filesystem.o Filesystem-impl.o -o Side-ls


clean:
	rm *.pcm *.o Side-ls
