#include <iostream.h>
#include "PROGRUN.H"

int runProc(char* executable) {
  system(executable);
  return 0;
}

int runProg(char* executable) {
  system(executable);
  system("cls");
  return 0;
}