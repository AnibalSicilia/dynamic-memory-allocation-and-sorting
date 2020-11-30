#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"


int read(FILE *f, student **arr, int *size) {

	student *iterator, *head, *tmp;
	int i, N;
	student **students;

	iterator = head = (student *)malloc(sizeof(student));

        if(iterator == NULL) {
                fprintf(stderr, "out of memory\n");
                return -1;
        }
	
	N = 0;

	while ( !feof(f) ) {

		fscanf(f, "%d %[^,], %s %f\n", &iterator->ID, iterator->lastname, 
		iterator->firstname, &iterator->grade);

		iterator->next = (student *)malloc(sizeof(student));
                iterator = iterator->next;

                if(iterator == NULL) {
                       printf("out of memory\n");
                       return -1;
                }

                iterator->next = NULL;

		N++;
	}

	iterator = head;
	i = 0;

	students = (student **)malloc(sizeof(student *) * N);

        while(iterator->next != NULL) {
		students[i] = iterator;
		iterator = iterator->next;
		i++;
        }

	*size = N;
	*arr = (student*)students;

}
