section .data
    format db "Hello, Holberton", 10, 0

section .text
global main

extern printf

main:
    push rdi
    lea rdi, [rel format]
    call printf
    add rsp, 8
    ret
