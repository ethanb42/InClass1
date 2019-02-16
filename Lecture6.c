/*
 * swap.c
 *
 *  Created on: Feb 14, 2019
 *      Author:Ethan Balderas
 */
#include <stdio.h>

void swap (int *x, int *y){

	int z = *x;
	*x = *y;
	*y = z;

}

int printString(){

	   char str[100];       //char array STRING used as buffer

	   printf( "Enter a value :");
	   fflush(stdout);  //ECLIPSE BUG
	   gets( str );
	   printf( "\nYou entered: ");
	   puts(str);

	   return 0;
}


void charPrint(){
	printf("\n");

	typedef int number;
	number c;
	printf( "Enter a value :");
	fflush(stdout);  //ECLIPSE bug
	c = getchar();
	printf("You entered: ");
	putchar(c);

	printf("\n");
	printf("\n");
}

void fileInput(){
	   FILE *fp;

	   char buff[255];
	   fp = fopen("textFile.txt", "r");
	   fscanf(fp, "%s", buff);
	   printf("1: %s\n", buff );
	   fgets(buff, 255, (FILE*)fp);
	   printf("2: %s\n", buff );
	   fgets(buff, 255, (FILE*)fp);
	   printf("3: %s\n", buff );
	   fclose(fp);


}





