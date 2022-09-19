#include <stdio.h>

int main() {

    FILE* fp; // file pointer to point the files
    int numarray[100]; // array to store the numbers from the text file
    int value; // to store the each numbers from file for temperly
    int i = -1;

    //opening the file
    if ((fp = fopen("numbers.txt", "r")) == NULL)
        return 1;

    //reading each numbers from file
    while (!feof(fp) && fscanf_s(fp, "%d", &value) && i++ < 100)
    {
        //storing the numbers to array
        numarray[i] = value;

    }

    //closing the file
    fclose(fp);

    //storing the count of the elements .it will equal to i when reading loop ends
    int count = i;

    //calculating the sum of elements of array
    float sum_of_elmnts = 0;
    for (i = 0; i < count; i++)
    {
        sum_of_elmnts = sum_of_elmnts + numarray[i];
    }

    //calculating the average
    float average = sum_of_elmnts / count;

    //opening another file for writing
    fp = fopen("output.txt", "w");

    if (fp == NULL)
    {
        printf("Error!");
        return -1;
    }

    //writing count and avrage to the first line
    fprintf(fp, "Count of Integers=%d and Average of Numbers=%f \n", count, average);

    //writing the elements from the array to output text file
    for (i = 0; i < count; i++)
    {
        fprintf(fp, "%d \n", numarray[i]);
    }

    //closing the file
    fclose(fp);








    return 0;
}