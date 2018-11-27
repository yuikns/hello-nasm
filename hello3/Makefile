.PHONY: all clean

all: foo

foo: foo.o
	@#ld -s -o $@ $^ -m elf_x86_64 # debug
	ld -g -ggdb -o $@ $^ -m elf_x86_64

foo.o : foo.asm
	@#nasm -f elf64 $< -o $@
	nasm -g -ggdb -O0 -w+orphan-labels -f elf64 $< -o $@

#foo: foo.o bar.o
#	ld -s -o $@ $^ -m elf_i386

#foo.o : foo.asm
#	nasm -f elf $< -o $@

#bar.o : bar.c
#	gcc -c -m32 -o $@ $<


#foo64: foo64.o bar64.o
#	ld -g -ggdb -s -o $@ $^ -m elf_x86_64

#foo64.o : foo.asm
#	@#nasm -g -ggdb -f elf64 $< -o $@
#	nasm -g -ggdb -f elf64 $< -o $@

#bar64.o : bar.c
#	gcc -g -ggdb -c -m64 -o $@ $<

clean:
	-rm -rf foo
	-rm -rf foo.o



