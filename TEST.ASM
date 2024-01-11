.model small
.code

public _testcall

_testcall PROC
    mov dl, 21h
    mov ah, 02h
    int 21h
_testcall ENDP
END