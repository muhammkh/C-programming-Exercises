#include <stdio.h>


int main() {
	int i = 0.0f;
	int salaries[12];
	float sum = 0.0f;

	for (i = 0; i < 12; i++) {
		printf("Enter salary of month[% d] = ", i + 1
		);
		scanf_s("%d", &salaries[i]);
		sum += (float)salaries[i];

	}

	printf("\n Total salary = %.2f \n", sum);
	return 0;


}

