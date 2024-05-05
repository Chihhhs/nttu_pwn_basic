#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

void init(){
    setvbuf(stdout,0,2,0);
    setvbuf(stdin,0,2,0);
    setvbuf(stderr,0,2,0);
}

char sc[0x100];

int main(){
    init();

    puts("Give me your shell:");
    read(0,sc,0x100);
    puts("And your buffer:");

    char buf[0x38];
    gets(buf);

    return 0;
}