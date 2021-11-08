CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_BASIC=basicClassification.o
OBJECTS_LOOP=advancedClassificationLoop.o
OBJECTS_REC=advancedClassificationRecursion.o
FLAGS=-g -Wall

all: loopd recursived loop recursives maindrec maindloop mains
mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm 
maindloop: $(OBJECTS_MAIN) libclassloop.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloop.so -lm 
maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so -lm
loop: $(OBJECTS_BASIC) $(OBJECTS_LOOP) 
	$(AR) -rcs libclassloop.a $(OBJECTS_BASIC) $(OBJECTS_LOOP) 
recursives: $(OBJECTS_BASIC) $(OBJECTS_REC) 
	$(AR) -rcs libclassrec.a $(OBJECTS_BASIC) $(OBJECTS_REC) 
recursived: $(OBJECTS_BASIC) $(OBJECTS_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_BASIC) $(OBJECTS_REC) 
loopd: $(OBJECTS_BASIC) $(OBJECTS_LOOP)
	$(CC) -shared -o libclassloop.so $(OBJECTS_BASIC) $(OBJECTS_LOOP) 
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c
basicClassification.o: basicClassification.c NumClass.h  
	$(CC) $(FLAGS) -c basicClassification.c -lm
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h  
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h  
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -lm

.PHONY: all clean

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
