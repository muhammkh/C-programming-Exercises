#include <string.h>
#include <stdio.h>
#include <stdbool.h>

void convert(char* str);

void convert(char* str)
{
    const char s[2] = " ";
    char* token;

    //the first token
    token = strtok(str, s);
    //other tokens
    while (token != NULL)
    { 
        //change the first letter to upper case
        token[0] = toupper(token[0]); 
        printf("%s ", token); 
        token = strtok(NULL, s);
    }
    printf("\n");
}

int main() {
    char str[250];
    // checking variable to when stop the program
    bool checked = false; 
    do
    {
        printf("Enter a string: ");
        gets(str);
        //if the entered string isn't "stop" or "STOP", run the convert function
        if (strcmp(str, "stop") != 0 && strcmp(str, "STOP") != 0) convert(str);
        //else stop the program
        else checked = true;
        
    } while (checked == false);
    printf("Program stopped.");
    return(0);
}