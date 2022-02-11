/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mrk1 , mrk2;	//assining the variables 
	int avg;
	
	printf("Enter Mark 1:");	//prompt for input
	scanf("%d", &mrk1);		//geting input	
  printf("Enter Mark 2:");	//prompt for input
	scanf("%d", &mrk2);		//geting input

	avg = (mrk1 + mrk2) / 2; //Calculate Avarge
	
	printf("Avarge Mark = %d\n", avg); //printing the outputs
	
  return 0;
}