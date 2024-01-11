#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "APM_IO.H"
#include "ABOUT.H"
#include "PROGRUN.H"
#include "CONSOLE.H"

int main(int argc, char *argv[])
{
  char conf_name[256] = "conf";
  char motd_conf_name[256] = "motd.txt";
  struct stat cs;
  createDirIfNotExist(conf_name);
  createConfigIfNotExist(motd_conf_name);
  //mkdir(dir_name);
  int appNum;
  int siNum;
  clearCon();
  printf("Suda's App Menu\r\n");
  printf(readFile("conf/motd.txt"));
  printf("Memory Info:\r\n");
  runProc("mem");
  printf("Please select an application:\r\n");
  printf("1. Edit\r\n");
  printf("2. Turbo C++\r\n");
  printf("3. QBasic\r\n");
  printf("8. Settings and Info\r\n");
  printf("9. Exit\r\n");
  cin >> appNum;
  if(appNum == 1) {
    //Edit app
    runProc("edit");
    main(0, 0);
    return 0;
  }
  if(appNum == 2) {
    //Turbo C++
    runProc("tc");
    main(0, 0);
    return 0;
  }
  if(appNum == 3) {
    //QBasic
    runProc("qbasic");
    main(0, 0);
    return 0;
  }
  if(appNum == 8) {
    //Settings and Info
    clearCon();
    printf("===== Settings & Info =====\r\n");
    printf("Enter a menu option\r\n");
    printf("0. Back\r\n");
    printf("1. About\r\n");
    cin >> siNum;
    if(siNum == 0) {
      // Back
      main(0, 0);
      return 0;
    }
    if(siNum == 1) {
      // About
      aboutPagePrint();
      main(0, 0);
      return 0;
    }
    return 0; // For now, make it repeat eventually, todo
  }
  if(appNum == 9) {
    //Exit
    clearCon();
    exit(0);
    return 0;
  }
  printf("Invalid program");
  return 0;
}