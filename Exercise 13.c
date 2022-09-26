#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* fp;
	char* Fname;
	char ch;
	int count = 0;
	
	if (argc < 2)    // Check if a Fname has been specified in  command
	{
		printf("not found \n");
		return(1);
	}
	else
	{
		Fname = argv[1];
	}

	
	fp = fopen(Fname, "r"); // For Opening file

	printf("Name | Price | quantity:\n"); // print the contains of items
	
	if (fp)
	{
		while ((ch = fgetc(fp)) != EOF && count <= 100)
		{
			if (ch == ';') {
				printf(" | ");
			}
			else {
				printf("%c", ch);
			}
			if (ch == '\n') {
				count++;
			}
		}
	}
	else
	{
		printf("Failed while Opening file \n");
	}
	return(0);
}

