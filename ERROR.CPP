#include <iostream.h>
#include <string.h>
#include "ABOUT.H"
#include "CONSOLE.H"

//extern void _testcall();
//_testcall();
void throwError(char* errorMsg) {
  system("cls");
  asm {
    mov ah, 09h
    mov cx, 1000h
    mov al, 20h
    mov bl, 47
  }
  char* errorMShow;
  errorMShow = (char*)malloc(strlen("ERROR: ")+strlen(errorMsg)+1);
  strcpy(errorMShow, "ERROR: ");
  strcat(errorMShow, errorMsg);
  printf(errorMShow);
  printf("\r\nAn error has occurred and the application must quit.");
  exit(1);
  //return 0;
}