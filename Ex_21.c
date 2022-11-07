#pragma warning (disable:4996)
#include <stdio.h>

#include <string.h>

#define MAX_CHARS 26

/* function declaration
*/ void calculate_frequency(FILE* fp, int* freq);
void print;
frequency(int* freq);

int main()

{

	char filename[100]; int freq[MAX_CHARS]; FILE* fp;



	/* input filename from user printf("Enter a filename:"); gets(filename);

	fp = fopen(filename, "r");

	/* error handling */ if (fp == NULL)

	{
		fprintf(stderr, "Error opening file %s\n", filename);

		return -1;

	}

	/* calculate frequency of first letter of words */ calculate frequency(fp,

		freq);

	/* print frequency
	*/ print; frequency(freq);

	/* close the file */
	fclose(fp);
	return 0;

	(3)

}

/*

// Function to calculate frequency of first letter of

//Only words starting with a letter are counted.

*/ void calculate_frequency(FILE* fp, int* freq) {

	int ch; int i;

	// initialize all elements of freq[] to 0 */ for (i = 0; i < MAX_CHARS; i++) freq[i] = 0;

	// extract characters from file and store frequencies */ while ((ch = fgetc(fp)) !=

		EOF) {



		/**/ consider only alphabet

			if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

				// convert lower case

				to upper case* /

					<= 'Z')

					if (ch >= 'a' && ch

						ch -= 32;

						i = ch 'A';

						freq[i]++;

			}

		//function to print frequencies of first letters* of words along with their corresponding alphabet.
		*/ void print_frequency(int* freq) {

			int i, j;

			printf("\nFrequencies of first letters of words : \n");

			for (i = 0; i < MAX_CHARS; i++) {

				/* print only those frequencies which are not zero */ if (freq[i] != 0) {

					printf("%c %d\n", i + 'A', freq[i]);

				}

			}

		}