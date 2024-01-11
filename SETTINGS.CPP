#include <iostream.h>
#include "SETTINGS.H"
#include "ABOUT.H"
#include "CONSOLE.H"

int settingsPagePrint() {
  int siNum;
  system("cls");
  clearCon();
  printf("===== Settings & Info =====\r\n");
  printf("Enter a menu option\r\n");
  printf("0. Back\r\n");
  printf("1. About\r\n");
  cin >> siNum;
  if(siNum == 0) {
    // Back
    return 0;
  }
  if(siNum == 1) {
    // About
    system("cls");
    aboutPagePrint();
    return 0;
  }
  return 0;
}