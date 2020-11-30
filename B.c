#include <stdio.h>
#include <stdlib.h>
#include "student.h"


int idcmp(const void *s1, const void *s2) {

	student *S1, *S2;

	S1 = *(student **)s1;
	S2 = *(student **)s2;

	if (strncmp(S1->lastname, S2->lastname, 32) == 0) {
		if (strncmp(S1->firstname, S2->firstname, 32) == 0) {
			return S1->ID - S2->ID;
		}
		else {
			return strncmp(S1->firstname, S2->firstname, 32); 
		}
	}  
	return strncmp(S1->lastname, S2->lastname, 32);
}


void B(student **array, int size)
{
	qsort(array, size, sizeof(student *), idcmp);

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
