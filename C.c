#include <stdio.h>
#include <stdlib.h>
#include "student.h"


void C(student **students1, student **students2, int size1, int size2, char *outFile)
{
	FILE *f = fopen(outFile, "w");

	int i, j;

	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size1; j++)
		{
			if ( students1[i]->ID == students2[j]->ID) 
			{
				fprintf(f, "%d %s, %s %.1f %.1f\n\n", students1[i]->ID, 
				students1[i]->lastname, students1[i]->firstname, 
				students1[i]->grade, students2[j]->grade);
			}
		}
	}

	fclose(f);

	printf("%s is ready.\n", outFile);

	return;
}
