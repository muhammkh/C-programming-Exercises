#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {

    FILE* fp;
    char* filename;
    unsigned char* buffer;
    size_t n;
    int crc = 0;

    printf("Please enter a filename: ");
    scanf_s("%s", filename);

    fp = fopen(filename, "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return(-1);
    }

    fseek(fp, 0, SEEK_END);
    n = ftell(fp);
    rewind(fp);

    buffer = (unsigned char*)malloc(sizeof(unsigned char) * n);
    if (buffer == NULL) {
        fprintf(stderr, "Memory error!");
        fclose(fp);
        return(-1);
    }

    fread(buffer, sizeof(unsigned char), n, fp);

    for (int i = 0; i < n; i++)
        crc += buffer[i];

    printf("Name: %s\n", filename);
    printf("Bytes read: %zu\n", n);
    printf("CRC: %04X\n", crc);

    free(buffer);
    fclose(fp);

    return(0);
}
