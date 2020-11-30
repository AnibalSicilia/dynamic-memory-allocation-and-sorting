#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main( int argc, char *argv[] )
{
	if ( argc < 3 )
	{
		printf("Error! program needs at least 3 arguments\n");
		return -1;
	}

	if ( strlen(argv[1]) > 1 )
	{
		printf("Invalid routine name! Expected a single character"
			" but found '%s'.\n", argv[1]);
		return -1;
	}

	char ch = argv[1][0];

	if ( ch != 'A' && ch != 'a' && ch != 'B' && ch != 'b' &&
		ch != 'C' && ch != 'c' && ch != 'D' && ch != 'd') 
	{
		printf("Invalid routine name! Need A, B, C, or D, but "
			"found '%c'\n", ch);
		return -1;
	}

	FILE *f1 = fopen(argv[2], "r");
	
	if (f1 == NULL) {
    		printf("Can't open file: %s!\n", argv[2]);
    		return -1;
  	}
	// populate first array from file 1
	student **students1;
	int size1;
	read(f1, &students1, &size1);
	fclose(f1); 

	int i;

	if (ch == 'A' || ch == 'a')
	{
		A(students1, size1);
	}
	else if (ch == 'B' || ch == 'b')
	{
		B(students1, size1);
	}
	else  // C or D
	{
		FILE *f2 = fopen(argv[3], "r");
	
		if (f2 == NULL) 
		{
    			printf("Can't open file: %s!\n", argv[3]);
    			return -1;
  		}
		// populate second array from file 2
		student **students2;
		int size2;
		read(f2, &students2, &size2); 
		fclose(f2);

		if (ch == 'C' || ch == 'c')
		{
			if ( argc < 5 )
			{
				printf("Invalid format for routine C! "
				"Need 4 aguments but found %d.\n", argc - 1);
				return -1;
			}
			C(students1, students2, size1, size2, argv[4]);
		}
		else
		{
			if ( argc < 4 )
			{
				printf("Invalid format for routine D! "
				"Need 4 aguments but found %d.\n", argc - 1);
				return -1;
			}	
			D(students1, students2, size1, size2);
		}
		// free second array
		for(i = 0; i < size2; i++) {
			free(students2[i]);
		}
		free(students2);			

	}
	// free first array
        for(i = 0; i < size1; i++) {
                free(students1[i]);
        }
	free(students1);

  	return 0;
}
