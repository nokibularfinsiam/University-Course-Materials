.MODEL SMALL
.STACK 100H
.DATA

a DB 'Enter A number: $'
b DB 'Addition value: $'
c DB 'Substract value: $'
NEWL DB 10, 13, '$'

.code
Main proc
    
    mov ax, @data
    mov ds, ax
    
    ;input-1
    
    mov ah, 9h
    lea dx, a
    int 21h
    
    mov ah, 1
    int 21h
    mov bh, al
    
    mov ah, 9
    lea dx, NEWL
    int 21h
    
    ;input-2
    
    mov ah, 9h
    lea dx, a
    int 21h
    
    mov ah, 1
    int 21h
    mov ch, al
    
    mov ah, 9
    lea dx, NEWL
    int 21h
    
    ;addition
    
    add bh, ch
    sub bh, 30h
    
    mov ah, 9
    lea dx, b
    int 21h
    
    mov ah, 2
    mov dl, bh
    int 21h
    
    mov ah, 9
    lea dx, NEWL
    int 21h
    
    ;Substract
    
    sub bh, ch
    add bh, 30h
    
    mov ah, 9
    lea dx, c
    int 21h
    
    mov ah, 2
    mov dl, bh
    int 21h
    
    mov ah, 4ch
    int 21h
    main endp
end main
