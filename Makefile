TARGET = grade
CC = gcc
OBJECTS = grade.o readfile.o A.o B.o C.o D.o

all: $(TARGET)

%.o: %.c
	$(CC) -c $^

grade readfile A B C D: $(OBJECTS)
	$(CC) -o $@ $^

clean:
	rm $(TARGET) $(OBJECTS)


