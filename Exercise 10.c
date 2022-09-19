#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINESIZE 256

int main(void)
{
    int a[20];
    FILE* fptr;
    fptr = fopen("numbers.txt","w"); //open the writing file

    char* string;
    char line[LINESIZE];

    //read input line and write it to the writing file
    while (fgets(line, LINESIZE, stdin) != NULL && strcmp(line, ".\n") != 0)
    {
        string = (char*)malloc(LINESIZE * sizeof(char));
        scanf_s(line, "%[^\n]s", string);
        fprintf(fptr, "%d:%s\n", strlen(string), string);
        if (string == NULL) printf("ERROR");
        free(string); //free string after reading
    }

    fclose_s(fptr); //close file after writing
    return 0;
}