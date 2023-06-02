section .data
    format db "Hello, Holberton", 0
    newline db 10, 0

section .text
    global main
    extern printf

main:
    ; Call printf with the format string
    mov rdi, format
    xor rax, rax
    call printf
    
    ; Print a new line
    mov rdi, newline
    xor rax, rax
    call printf
    
    ; Exit the program
    mov eax, 0
    ret
