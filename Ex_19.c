#pragma warning (disable:4996)


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* fp1;
    FILE* fp2;
    int size;
    char* fileName;
    char* newFileName;
    int byteOffset;
    int byteCount;
    char* buffer;

    
    printf("Enter file name: ");         // file name from user
    fileName = (char*)malloc(1000 * sizeof(char));    
    scanf_s("%s", fileName);

    
    fp1 = fopen(fileName, "rb"); //Open the file  

    
    if (fp1 == NULL)
    {
        printf("Error opening file %s.\n", fileName);
        return -1;
    }

    
    fseek(fp1, 0L, SEEK_END);
    size = ftell(fp1);           // size of the file
    rewind(fp1);

    
    buffer = (char*)malloc(size * sizeof(char));
    fread(buffer, size, 1, fp1);                   //Reading contents into the buffer

    
    fclose(fp1);

    
    printf("File size is %d bytes.\n", size);

    
    printf("Enter byte offset and byte count: ");
    scanf_s("%d %d", &byteOffset, &byteCount);

    
    if (byteOffset > size || byteOffset < 0)
    {
        printf("Error: Invalid byte offset.\n");      //Checking if byte offset is valid
        return -1;
    }

    
    if (byteCount + byteOffset > size || byteCount < 0)
    {
        printf("Error: Invalid byte count.\n");       //Checking if byte count is valid
        return -1;
    }

    //Create new file name
    newFileName = (char*)malloc((strlen(fileName) + 5) * sizeof(char));
    strcpy(newFileName, fileName);
    strcat(newFileName, ".new");

    
    fp2 = fopen(newFileName, "wb");

    
    fwrite(buffer, byteOffset, 1, fp2);
    fwrite(&buffer[byteOffset + byteCount], size - (byteOffset + byteCount), 1, fp2);

   
    fclose(fp2);

    //Free memory
    free(fileName);
    free(newFileName);
    free(buffer);

    return 0;
}