#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
	int no;
	int credits;
	char name[50];
	char city[50];
	char address[50];
};
char answer;
int main()
{
	struct student myRecord;
	FILE* ptr;
	ptr = fopen("student.dat", "rb");


	if (answer == 'Y' || answer == 'y') {
		for (int i = 0; i < 10; i++)
		{
			fread(&myRecord, sizeof(struct student), 1, ptr);
			printf("%s\n", myRecord.name);
			printf("%s\n", myRecord.credits);
			printf("%s\n", myRecord.no);
			printf("%s\n", myRecord.city);
			printf("%s\n", myRecord.address);
		}
	}
	else {
		printf("\nName :: ");
		// gets(s1.name);
		scanf("%s", &s1.name);
		printf("Roll No :: ");
		scanf("%d", &s1.no);
		printf("city :: ");
		scanf("%s", &s1.city);
		printf("address :: ");
		scanf("%s", &s1.address);
		printf("credits :: ");
		scanf("%d", &s1.credits);
		fwrite(s1, sizeof(struct student), 1, fopen);
		printf("\nRecord has been added successfully !!\n");
	}

	fclose(ptr);

	return 0;

}