#include <stdio.h>
#include <stdlib.h>


void main()
{
	FILE *fptr;
	char filename[30];
	char c;
	
	printf("Enter the name of the log:\n");
	scanf("%s", filename);

	fptr = fopen(filename, "r");

	if(fptr == NULL)
	{
		printf("Error, file not found.");
		exit(1);
	}

	c = fgetc(fptr);

	while(c != EOF)
	{
		int count = 0;
		strcmp(c, 't');

		printf("%c", c, count);
		c = fgetc(fptr);
	}

	fclose(fptr);
}
