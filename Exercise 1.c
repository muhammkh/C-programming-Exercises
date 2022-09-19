#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Please enter the 1st number ");
    scanf_s("%d", &number);

    int count = 0;

    while (number != 0) {
        if (number > 0) {
            sum = sum + number;
            count++;
        }
        else {
            printf("Please enter only positive number\n");
        }

        printf("Please enter another number or 0 to calculate average: ");
        scanf_s("%d", &number);
    }

    if (count > 0) {
        printf("AVERAGE = %f", ((float)sum) / count);
    }
    return 0;
}