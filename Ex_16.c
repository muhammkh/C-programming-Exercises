#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main 
(int argc, char* argv[])

{
	int l = 0, c = 0, i = 0;
	char line[256];
	l = atoi(argv[2]);
	FILE* fi;
	fi = fopen(argv[1], "r");

	if (!fi)
	{
		printf("\nUnable to open : %s ", fi);
		return -1;
	}
	while (fgets(line, sizeof(line), fi))
	{
		c++;
	}

	fclose(fi);

	fi = fopen(argv[1], "r");
	if (l <= c)
	{
		while (fgets(line, sizeof(line), fi))
		{
			i++;
			if (i >= l)
			{
				printf("%s ", line);
			}
		}
	}
	return 0;
}

