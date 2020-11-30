# dynamic-memory-allocation-and-sorting
Familiarize with dynamic memory allocation and sorting


Familiarize yourself with structures, dynamic memory allocation, simple math, and sorting using C. In this project you will write a single program (with various functionality being adequately partitioned into multiple functions, and across multiple files) that will read from a data file, which contains student ID, student name, and grade.
The input file will specify student information (in the form: <student_id> <name> <grade> ) per line. The student IDs are numeric values that are guaranteed to fit within a 32 bit unsigned integer type. The student names are strings in the form of lastname, firstname each with at most 32 characters. The grades are float types (i.e., they are guaranteed to fit in a float type). There is no limit to the number of lines in the file and consequently, to the students that your program must handle. A sample input file file1.data is shown below:
10002345 Mouse, Micky 90.0
34347887 Duck, Donald 62.0
28376654 Mouse, Minnie 95.0
Define and use data structures as appropriate.
You have to accomplish each of the tasks described below:

Part A: Print out all student in the following format. Here is how your input should look like for the sample set of points above:
Total students = 3
Name [ID]           :    Grade
--------------------------------
Micky Mouse [10002345]     :    60.0
Donald Duck [34347887]     :    92.0
Minnie Mouse [28376654]     :    95.0
Note: First name first in the print out.

Part B: Now sort the students according to their last name in ascending order and repeat the steps in Part A for the new sequence. For students whose last names are the same, sort them according to their first name in ascending order. For students whose last names and first names are both the same, sort them according to their ID in ascending order. Every student's ID is guaranteed to be unique.



Part C: You are given another data file named file2.data. This file contains the second time grade for all the students in file1.data and in the same format. However, the student ID may be in a different order. A sample input file file1.data is shown below:
34347887 Duck, Donald 90.0
28376654 Mouse, Minnie 67.0
10002345 Mouse, Micky 98.0
Merge the two files into a new file3.data. The student ID should be in the same order of file1.data. A sample output will be:
10002345 Mouse, Micky 90.0 98.0
34347887 Duck, Donald 62.0 90.0
28376654 Mouse, Minnie 95.0 67.0

Part D: Calculate the final grade as the average of grades from file1.data and file2.data. Sort the students by final grade in ascending order and print to screen. A sample output is:
Micky Mouse 10002345 94.0
Minnie Mouse 34347887 81.0
Donald Duck 28376654 76.0

Write a single program that does one of the above actions depending on the command line input. Name your executable "grade" which takes either two,three, or four arguments depending on the choice and is invoked as follows:

bash$ ./grade <choice> <input-file1> [input-file2] [input-file3]

Choice can be either A, B, C, or D and the program will run the corresponding management routine. Parts A and B take 2 arguments (choice, input-file1). Choice C takes 2 additional arguments (input-file2, and input-file3) while choice D takes 1 additional argument (input-file2). Write the routines in separate C file(s) as appropriate and link it to the main program using a Makefile. 
Note: YOU MAY USE the qsort() C library function. 




