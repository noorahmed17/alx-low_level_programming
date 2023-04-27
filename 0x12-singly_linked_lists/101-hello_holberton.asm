section .data
    hello_msg db 'Hello, Holberton', 0Ah, 0
    format db '%s', 0Ah, 0

section .text
    global _start

_start:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp

    ; Load the address of the hello message into rdi
    lea rdi, [hello_msg]

    ; Load the address of the format string into rsi
    lea rsi, [format]

    ; Call printf with the arguments
    mov eax, 0
    call printf

    ; Clean up and exit
    mov eax, 0
    leave
    ret
