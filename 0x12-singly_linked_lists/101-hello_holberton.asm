section .data
    fmt: db "Hello, Holberton!", 0Ah, 0

section .text
    global main

    extern printf

    main:
        push    rbp
        mov     rbp, rsp
        mov     rdi, fmt
        xor     eax, eax
        call    printf
        mov     eax, 0
        pop     rbp
        ret
