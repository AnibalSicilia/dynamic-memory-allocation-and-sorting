#include <stdio.h>
#include "student.h"


int idcmp2(const void *s1, const void *s2) {

	student *S1, *S2;

	S1 = *(student **)s1;
	S2 = *(student **)s2;

	if (S1->grade == S2->grade)
		return 0;
	if (S1->grade > S2->grade)
		return -1;

	return 1;
}


void D(student **students1, student **students2, int size1, int size2)
{
	int i, j;
	float finalG;

	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size1; j++)
		{
			if ( students1[i]->ID == students2[j]->ID) 
			{
				finalG = (students1[i]->grade + students2[j]->grade)/2;

				students1[i]->grade = finalG;
			}
		}
	}

	qsort(students1, size1, sizeof(student *), idcmp2);

	for (i = 0; i < size1; i++)
	{
		printf("%s %s %d %.1f\n\n", students1[i]->firstname, 
			students1[i]->lastname, students1[i]->ID, students1[i]->grade);
	}

	return;
}
