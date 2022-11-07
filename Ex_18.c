#include <stdio.h> 
int main()
{
	unsigned int num, num1, result;

	printf("Enter a hexadecimal number: ");
	scanf_s("%x", &num);
	printf("Hexadecimal number with 8 digits: %08x", num); 
		
	
	printf("Enter an integer in the range from 0 to 31: ");
	scanf_s("%d", &num1);


	result = num & (~(31 << 6));
	result = result | (num1 << 6);
	printf("Hexadecimal number with leading zeros: %08x", result);

		return 0;

}