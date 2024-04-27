# Pwn

> REF by yuawn [NTU-Computer-Security](https://github.com/yuawn/NTU-Computer-Security)

## Prepare

1. VirtualMachine [install tutorial](https://hackmd.io/@SCIST/VirtualBox)
2. ubuntu [22.04 LTS](https://ubuntu.com/download/desktop)
3. gdb `sudo apt udate; apt install gdb`
4. [peda](https://github.com/longld/peda)


## x86_64 assembly

### Registers
    + RAX RBX RCX RDX RDI RSI - 64 bit
    + EAX EBX ECX EDX EDI ESI - 32 bit
    + AX BX CX DX DI SI - 16 bit
    + AX -> AH AL - 8 bit

+ RSP
+ RBP
+ RIP

### Instruction

+ jmp
    + jmp a = `mov rip,a`
+ call
    + `call a` = 
        `push next_rip`
        `mov rip,a`
+ leave
    + `mov rsp,rbp`
      `pop rbp`
+ ret
    + `pop rip`

## ELF

+ `.bss`
+ `.data`
+ `.rodata`
+ `.text`

`readelf -S <elf>`

```c
int a; 
int b=100; 
int  main(){
    int c; 
    puts("30 cm"); 
    return 0;
}
```

## pwntools
> [pwntools](https://github.com/Gallopsled/pwntools)



## Buffer Overflow


## ShellCode

1. input shellcode
1. overflow to the address of shellcode 

## docker-compose

```bash
$cd prectice
$docker compose up -d
```