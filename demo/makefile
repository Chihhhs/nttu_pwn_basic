all: elf.c bof.c
	gcc elf.c -o elf -no-pie
	gcc bof.c -o bof -no-pie -fno-stack-protector
clean:
	rm elf bof