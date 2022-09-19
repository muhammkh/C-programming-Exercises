#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 10000

// computeMultiplication() function return the product of the two array
float computeMultiplication(float arr1[], float arr2[], int n) {
    // result variable stores the product of two array
    float result = 0;

    // progressing the array
    for (int i = 0; i < n; i++
      ) {
        
        result += (arr1[i] * arr2[i]); // multiply the first array value with the second array value
    }

    
    return result; // return the result
}

int main() {

    // Declaration of the first array
    float arr1[3];
    // Declaration of the second array
    float arr2[3];

    printf("Enter the first vector values: ");
    for (int i = 0; i < 3; i++) {
     
        scanf_s("%f", &arr1[i]);    // taking input for the first array
    }

    printf("Enter the second vector values: ");
    for (int i = 0; i < 3; i++) {
        
        scanf_s("%f", &arr2[i]); // taking input for the second array
    }

    // Calculating the size of the array
    int n = sizeof(arr1) / sizeof(arr1[0]);


    printf("First vector values: ");

    for (int i = 0; i < 3; i++)     // calculating in the first array
    {
        
        printf("%.0f ", arr1[i]); // printing the first array
    }

    printf("\nSecond vector values: ");
    // calculating in the second array
    for (int i = 0; i < 3; i++) {
        // calcilating the second array
        printf("%.0f ", arr2[i]);
    }

    
    printf("\n");     // calculating in the first array

    // computeMultiplication() function which returns the product of both the array
    float product = computeMultiplication(arr1, arr2, n);
    // printing the product
    printf("Product: %.2f", product);

    // printing new line
    printf("\n");

    return 0;
}