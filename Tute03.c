/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n, sum; //declaring variables
  sum = 0;

  printf("Enter the Number: "); //prompt for Number
  scanf("%d", &n);  //getting input

  while ( n > 0 ){
    sum += n; //calculate
    n--;
  }

  printf("Sum = %d\n", sum);  //display the Sum
  return 0;
}

