#pragma warning (disable:4996)


#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <time.h>   



void generate_password(char* password, int size, const char* word)      // Function to generate password
{
    int i; // loop counter
    
    for (i = 0; i < size - strlen(word) - 1; i++)
    {
        password[i] = rand() % 95 + 32; 
    }
    
    strcpy(password + i, word);
}

int main()
{
    char word[120];     // word to place in the password
    int size;           // password length
    char password[120]; // password


    // seed the random number generator
    srand(time(NULL));

    // ask user to enter a word to place in the password or to enter “stop” to stop the program
    printf("Enter a word to place in the password or enter \"stop\" to stop the program: ");
    scanf_s("%s", word);

    // while loop to ask user to enter password length in the range of length of word + 2 to 30
    while (strcmp(word, "stop") != 0)
    {
        printf("Enter password length in the range of length of word + 2 to 30: ");
        scanf_s("%d", &size);
        
        generate_password(password, size, word);
       
        printf("Password: %s \n", password);

        //Enter a word to place in the password or to enter “stop” to stop the program
        printf("Enter a word to place in the password or enter \"stop\" to stop the program: ");
        scanf_s("%s", word);
    }
    return 0;
}