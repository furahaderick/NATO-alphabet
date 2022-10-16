#include <stdio.h>
#include <unistd.h>
#include <string.h>
FILE *fptr;
char cwd[150];

void file() {
    getcwd(cwd, sizeof(cwd));
    char filename[] = "/output.txt";
    strcat(cwd, filename);

    fptr = fopen(cwd, "w+");
}