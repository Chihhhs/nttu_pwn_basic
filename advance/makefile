all: src/bof.c src/sc.c
	gcc src/bof.c -o bof/share/bof -no-pie -fno-stack-protector
	gcc src/sc.c -o sc/share/sc -no-pie -fno-stack-protector -z execstack 

clean:
	rm bof/share/bof sc/share/sc