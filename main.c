/*
 * main.c
 *
 *  Created on: Feb 14, 2019
 *  Author: Ethan Balderas
 */


#include <stdio.h>
//initialize the functions
int lotsOfIfs();
void TernaryOperator();
int switcher();
int counterAdding();
int array();
int pointers();
int structBook();
int pointerStruct();
int functionBook();
int unionZero();
int unionOne();
int unionTwo();
void swap();
int printString();
void charPrint();
void fileInput();


//Used to execute all the programs because only one main is allowed
 int mainTwo(){


//Lecture 5
printf("Lecture 5 Code\n");
lotsOfIfs();
printf("\n");
TernaryOperator();
printf("\n");
switcher();
printf("\n");
counterAdding();
printf("\n");
array();
printf("\n");
pointers();
printf("\n");
structBook();
printf("\n");
pointerStruct();
printf("\n");
functionBook();
printf("\n");
unionZero();
printf("\n");
unionOne();
printf("\n");
unionTwo();


printf("\n");
printf("\nLecture 6 Code");
printf("\n");
//Lecture 6

	int a = 45, b = 35;
    printf("Before Swap\n");
    printf("a = %d b = %d\n",a,b);

    swap(&a, &b);

    printf("After Swap with pass by reference\n");
    printf("a = %d b = %d\n",a,b);

//there is an error with input stream.
charPrint();
printString();
printf("\n");
fileInput();
//end
 }


