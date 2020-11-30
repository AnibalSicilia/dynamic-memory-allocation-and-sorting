#include <stdio.h>
#include "student.h"

void A(student **array, int size)
{
	printf("Total students = %d\n\n", size);
	printf("Name [ID]           :    Grade\n\n");
	printf("--------------------------------\n");

	int i;

	for (i = 0; i < size; i++)
	{
		printf("%s %s [%d]     :    %.1f\n\n", array[i]->firstname, 
			array[i]->lastname, array[i]->ID, array[i]->grade);
	}

	return;
}
