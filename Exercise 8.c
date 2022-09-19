#include <stdio.h>
#include <stdlib.h>



int main()
{

    char the_word[20];
    int ln;
    int i = 0;

    printf("\nEnter the length of the string: ");
    scanf_s("%d", &ln);
    //printf("The length is: %d", ln );
    scanf_s("%s", the_word);
    char* new_word = (char)malloc(ln * sizeof(char));
    for (int i = 0; i < ln; i++) {
        int ascii = (int)(the_word[i]);
        if ((ascii >= 65 && ascii <= 77)) {
            new_word[i] = (78 + (77 - ascii));
        }
        else if ((ascii >= 97 && ascii <= 109)) {
            new_word[i] = (110 + (109 - ascii));
        }
        else if (ascii >= 78 && ascii <= 90) {
            new_word[i] = (77 - (ascii - 78));
        }
        else if ((ascii >= 110 && ascii <= 122)) {
            new_word[i] = (109 - (ascii - 110));
        }

    }

    printf("\nThe new word is: %s", new_word);
    free(new_word);

    return 0;
}