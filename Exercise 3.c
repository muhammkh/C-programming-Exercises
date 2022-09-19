#include <stdio.h>


float Average(float a[], int n);

float Average(float a[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++) sum += a[i];
	return sum / n;
}

int main()
{
	//an array holding course grades is initialized to zero
	float grade[10] = { 0 };


	//for the number of students

	int n = 0;

	//calculating variable
	int i = 0;

	//program must not allow the number of students that are greater that the array size
	do
	{
		printf("Enter the number of students: ");
		scanf_s("%d", &n);
		if (n > 10) printf("Student numbers shoulbe be either equal or less 10\n");
	} while (n > 10);

	while (i < n)

		//grade of student number 
	{
		printf("Student %d grade: ", i + 45000);
		scanf_s("%f", &grade[i]);

		// the grade range is in 0-5

		if ((grade[i] >= 0) && (grade[i] <= 5)) i++;

		else printf("Grade should be in the range 0-5!\n");
	}

	printf("Average: %f", Average(grade, n));

	//prints the average with one decimal accuracy

	return 0;
}