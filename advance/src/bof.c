#include<stdio.h>
#include<stdlib.h>

void call_sh(){
    system("/bin/bash");
}

int main(){

    setvbuf(stdout,0,2,0);
    setvbuf(stdin,0,2,0);
    setvbuf(stderr,0,2,0);
    
    puts("Welcome to bof challenge!");
    char buf[0x30];
    gets(buf);
    return 0;
}