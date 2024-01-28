.model small
.stack 100h
.data

a db 'Hello world $'
b db 'Siam $'
.code
main proc
    mov ax, @data
    mov ds, ax
    mov ah, 9h
    Lea dx, a
    int 21h
    
    mov bh, 9h
    lea dx, b
    int 21h
    
    mov ah, 4ch
    int 21h
    mov ah, 4ch
    int 21h
    main endp
End main




