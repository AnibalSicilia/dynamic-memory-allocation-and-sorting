
#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

typedef struct __student {
	unsigned int ID;
	char lastname[32];
	char firstname[32];
	float grade;
	struct __student *next;
} student;

int idcmp(const void *s1, const void *s2);

#endif
