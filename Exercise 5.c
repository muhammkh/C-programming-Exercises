#include <string.h>
#include <stdio.h>
#include <stdbool.h>

void convert(char* str);

void convert(char* str)
{
    int i = 0;  //scan all the letters in the string
    
    while (str[i])
    {
        if (str[i] == ' ') str[i] = '_'; //if letter is space, change it to underscore
        i++;
    }
    printf("%s\n", str);
}

int main() 
{
    char str[240];
    bool checked = false; //this variable for checking when to stop the program

    do
    {
        printf("Enter a string: ");
        gets(str);
       
 if (strcmp(str, "stop") != 0 && strcmp(str, "STOP") != 0) convert(str);  //if the entered string isn't "stop" or "STOP", then run this convert function
       
 else checked = true; //else stop the program
    }
    while (checked == false);

    printf("Program stopped.");

    return(0);
}