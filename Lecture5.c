/*
 * Lecture5.c
 *
 *  Created on: Feb 14, 2019
 *  Author: ebald
 */
#include <stdio.h>
#include <string.h>

int lotsOfIfs () {

   /* local variable definition */
   int a = 100;

   /* check the boolean condition */
   if( a == 10 ) {
      /* if condition is true then print the following */
      printf("Value of a is 10\n" );
   } else if( a == 20 ) {
      /* if else if condition is true */
      printf("Value of a is 20\n" );
   } else if( a == 30 ) {
      /* if else if condition is true  */
      printf("Value of a is 30\n" );
   } else {
      /* if none of the conditions is true */
      printf("None of the values is matching\n" );

   }
   printf("Exact value of a is: %d\n", a );

   return 0;

}



void TernaryOperator()
{
   int a , b;
   a = 10;
   printf( "Value of b is %d\n", (a == 1) ? 20: 30 );
   printf( "Value of b is %d\n", (a == 10) ? 20: 30 );

}


int switcher () {

   /* local variable definition */

   char grade = 'B';
   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   printf("Your grade is  %c\n", grade );

   return 0;
}


int A;
int B;

int fun(){
	static int count =0; //Static variable
	count++;
	return count;
}

int add()
{
	return A +B;
}

int counterAdding(){
	int answer; //local variable
	A=5;
	B=7;
	answer = add();
	printf("%d\n", answer);
	printf("%d ", fun());
    printf("%d ", fun());

return 0;
}


int array(){
	int n[10];
	int i, j;

	//initializes elements of array n to 0
	for (i=0; i < 10; i++ ){
		n[i] = i +100;
	}

	for (j=0; j<10; j++){
		printf("Element [%d] = %d\n", j, n[j]);
	}

	return 0;
}

int pointers(){


	int var =20;
	int x =10;
	int *ip; // pointer var

	ip = NULL; //point to 0 for safety
	ip = &var;

	x= x + *ip;
	ip = &x;
	ip = ip +3;

	printf("Address of var variable: %x\n", &var  );
	   /* address stored in pointer variable */
	   printf("Address stored in ip variable: %x\n", ip );
	   /* access the value using the pointer */
	   printf("Value of *ip variable: %d\n", *ip );

	   return 0;
}


struct Books {

   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int structBook(){
	   struct Books Book1;        /* Declare Book1 of type Book */
	   struct Books Book2;        /* Declare Book2 of type Book */

	   /* book 1 specification */
	   strcpy( Book1.title, "C Programming");
	   strcpy( Book1.author, "Nuha Ali");
	   strcpy( Book1.subject, "C Programming Tutorial");
	   Book1.book_id = 6495407;

	   /* book 2 specification */
	   strcpy( Book2.title, "Telecom Billing");
	   strcpy( Book2.author, "Zara Ali");
	   strcpy( Book2.subject, "Telecom Billing Tutorial");
	   Book2.book_id = 6495700;

	   /* print Book1 info */
	   printf( "Book 1 title : %s\n", Book1.title);
	   printf( "Book 1 author : %s\n", Book1.author);
	   printf( "Book 1 subject : %s\n", Book1.subject);
	   printf( "Book 1 book_id : %d\n", Book1.book_id);

	   /* print Book2 info */
	   printf( "Book 2 title : %s\n", Book2.title);
	   printf( "Book 2 author : %s\n", Book2.author);
	   printf( "Book 2 subject : %s\n", Book2.subject);
	   printf( "Book 2 book_id : %d\n", Book2.book_id);

	   return 0;
	}






