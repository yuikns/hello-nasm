all: hello

hello.o :
	nasm -f elf hello.asm -o $@
	nasm -f elf64 hello.asm -o hello64.o

hello: hello.o
	ld -s -o $@ $@.o -m elf_i386
	ld -s -o $@64 $@64.o -m elf_x86_64


clean:
	rm -rf hello hello.o hello64 hello64.o


