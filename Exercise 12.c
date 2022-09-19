#include <stdio.h>
#include <string.h>
struct item {
    char name[30];
    float price;
};
int main() {
    int i = 0, count;

    do
    {
        if (i > 0)
            printf("Array size must be atleast 20 elements");

        printf("\nEnter the no of items");
        scanf("%d", &count);
        i++;
    } while (count < 3);
    printf("Enter Item Details");

    struct item itm[count];

    char itm_name[100];
    float itm_price;

    for (i = 0; i < count; i++)
    {
        printf("\nEnter item name %d :", (i + 1));
        scanf("%s", itm_name);

        int result = strcmp(itm_name, "stop");
        if (result == 0)
            break;

        strcpy(itm[i].name, itm_name);

        printf("Enter price 1 :");
        scanf_s("%f", &itm_price);
        itm[i].price = itm_price;
    }

    int itm_count = i;

    FILE* fptr;
    fptr = fopen("pricelist.txt", "w");

    if (fptr == NULL)
    {
        printf("Error!");
        return -1;
    }

    for (i = 0; i < itm_count; i++) {
        fprintf(fptr, "%f;%s \n", itm[i].price, itm[i].name);
    }
    fclose(fptr);
    printf("pricelist.txt created!");
    return 0;
}
