#include <iostream.h>
#include "APM_IO.H"

int createDirIfNotExist(char* DirName) { // Returns 1 if exists, 0 if not
  struct stat cs;
  if(stat(DirName, &cs) == 0) {
    return 1; // Exists
  }
  else {
    char* full_text;
    full_text = (char*)malloc(strlen(DirName)+strlen(DirName)+1);
    strcpy(full_text, "md ");
    strcat(full_text, DirName);
    system(full_text);
    return 0; // Not exist
  }
  return 2;
}

int createConfigIfNotExist(char* FileName) { // Returns 1 if exists, 0 if not
  struct stat cs;
  char* fnDir;
  fnDir = (char*)malloc(strlen("conf/")+strlen(FileName)+1);
  strcpy(fnDir, "conf/");
  strcat(fnDir, FileName);
  if(stat(fnDir, &cs) == 0) {
    return 1; // Exists
  }
  else {
    char* full_text;
    full_text = (char*)malloc(strlen("echo. > conf/")+strlen(FileName)+1);
    strcpy(full_text, "echo. > conf/");
    strcat(full_text, FileName);
    system(full_text);
    printf(full_text);
    return 0; // Not exist
  }
  return 2;
}

char* readFile(char* FileName) {
    char* full_text;
    full_text = (char*)malloc(strlen(FileName)+strlen(FileName)+1);
    strcpy(full_text, "type ");
    strcat(full_text, FileName);
    runProc(full_text);
}