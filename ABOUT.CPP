#include <iostream.h>
#include "ABOUT.H"
#include "CONSOLE.H"

//extern void _testcall();
//_testcall();
int aboutPagePrint() {
  system("cls");
  clearCon();
  //printf(testcall());f
  printf("===== About =====\r\n");
  printf("Suda's App Menu\r\n");
  printf("Created 2024 by Lucy Zukor using Turbo C++ 3.0\r\n");
  printf("C++ Version: AT&T C++ 2.1 (1990)\r\n");
  printf("===== Press any key to return =====");
  system("pause >nul");
  return 2;
}