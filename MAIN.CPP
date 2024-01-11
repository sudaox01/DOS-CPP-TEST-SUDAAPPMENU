#include <dos.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "APM_IO.H"
#include "ABOUT.H"
#include "SETTINGS.H"
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
  system("cls");
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
    system("cls"); // Due to weirdness with screen clearinigg
    main(0, 0);
    return 0;
  }
  if(appNum == 2) {
    //Turbo C++
    runProc("tc");
    system("cls"); // Due to weirdness with screen clearinigg
    main(0, 0);
    return 0;
  }
  if(appNum == 3) {
    //QBasic
    runProc("qbasic");
    system("cls"); // Due to weirdness with screen clearinigg
    main(0, 0);
    return 0;
  }
  if(appNum == 8) {
    //Settings and Info
    settingsPagePrint();
    main(0, 0);
    return 0;
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