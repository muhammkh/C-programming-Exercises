#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

int main(int argc, char* argv[])

{

	//main_program_filename argument1 argument2.

	if (argc != 2)

	{

		printf("Number of arguments are less\n");

		return 1;

	}

	

	if (isalpha(argv[0]))  //To check if the first parameter is a filename and not a number 

	{
     printf("First argument should be filename and second should be a number.\n");
     return 1;

	}

	char* filename = argv[0];

	FILE* file = fopen(argv[0], "r");

	if (!file)

	{

		printf("\n Unable to open the file: %s\n Check the name again\n", filename);

		return -1;

	}

	//check the upper condition
	char line[500];

	int countLine = 0;

	int userNumber = atoi(argv[1]);

	printf("%d\n", userNumber);

	int flag = 0; 

	while (fgets(line, sizeof(line), file))

	{

		countLine++;

		if (countLine >= userNumber)

		{

			printf("%s", line);

		}

	}

	fclose(file);

	if (flag == 0)

		printf("File %s does not have %d number of lines\n", filename, userNumber);

	return 0;

}