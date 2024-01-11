#include <iostream.h>
#include "PROGRUN.H"

int runProc(char* executable) {
  system(executable);
  return 0;
}