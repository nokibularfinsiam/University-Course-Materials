.MODEL SMALL
.STACK 100H
.DATA

a DB 'Enter A number: $'
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
    
    ;input-3
    
    mov ah, 9h
    lea dx, a
    int 21h
    
    mov ah, 1
    int 21h
    mov cl, al
    
    mov ah, 9
    lea dx, NEWL
    int 21h
    
    ;output-1
    
    mov ah, 2
    mov dl, bh
    int 21h
    
    mov ah, 9
    lea dx, NEWL
    int 21h
    
    ;output-2
    
    mov ah, 2
    mov dl, ch
    int 21h
    
    mov ah, 9
    lea dx, NEWL
    int 21h
    
    ;output-3
    
    mov ah, 2
    mov dl, cl
    int 21h
    
    mov ah, 4ch
    int 21h
    main endp
end main
