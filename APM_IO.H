#ifndef APM_IO
#define APM_IO

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "PROGRUN.H"

int createDirIfNotExist(char* DirName);
int createConfigIfNotExist(char* FileName);
char* readFile(char* FileName);
char* readMotd();

#endif