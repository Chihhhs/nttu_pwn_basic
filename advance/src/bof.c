#include<stdio.h>
#include<stdlib.h>

void call_sh(){
    system("/bin/bash");
}

int main(){
    char buf[30];
    puts("Welcome to bof challenge!");
    gets(buf);
    return 0;
}