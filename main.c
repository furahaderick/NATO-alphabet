#include <stdio.h>
#include <ctype.h>
#include "filer.h"

int main()
{
    char phrase[100];
    char *nato[] = {
            "Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
            "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima",
            "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo",
            "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
            "Yankee", "Zulu"
    };


    printf("Enter a phrase: ");
    fgets(phrase, sizeof(phrase), stdin);

    int index;
    for(index = 0;phrase[index] != '\0';index++);

    int counter = 0;
    int finder;

    file();
    while(counter < 100) {
        phrase[counter] = toupper(phrase[counter]);
        for(finder = 0;finder < 25;finder++) {
            if(phrase[counter] == nato[finder][0]) {
                printf("%s\n", nato[finder]);
                fprintf(fptr,"%s\n", nato[finder]);
            }
        }
        counter++;
        if(counter == index) {
            break;
        }
    }
    fclose(fptr);

    return 0;
}