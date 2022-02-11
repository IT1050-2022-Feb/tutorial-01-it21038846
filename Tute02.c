/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance, ammount;  //declaring variables
  ammount = 0;

  printf("Enter the distance:");  //prompt for distance
  scanf("%d", &distance); //getting input

  if (distance > 30){ //check whether the distance is over 30kms
    ammount = 30 * 50 + (distance - 30) * 40; //calculate
  }
  else{
    ammount = distance * 50;  //calculate
  }

  printf("Ammount = %d\n", ammount);  //display the ammount

  return 0;
}
