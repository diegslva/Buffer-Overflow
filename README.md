# Buffer-Overflow
Simple buffer overflow exploit

compile with -fno-stack-protector -D_FORTIFY_SOURCE=0 options. 

gcc -fno-stack-protector -D_FORTIFY_SOURCE=0 -g -o overflow overflow.c

./overflow aaaaaaaaaa
