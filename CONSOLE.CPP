#include <iostream.h>
#include "CONSOLE.H"

int clearCon() {
  asm {
    MOV AH, 06h   
    XOR AL, AL  
    XOR CX, CX     
    MOV DX, 184FH  
    MOV BH, 1Eh  
    INT 10H
  }
  return 0;
}