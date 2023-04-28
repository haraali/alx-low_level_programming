global   main
extern    printf

section .text
main:
    mov     edi, message
    xor     eax, eax
    call    printf
    xor     eax, eax
    ret

section .data
message: db `Hello, Holberton\n`,0

