/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  //variable declaration
  float mark1,mark2,sum; 
  // take user inputs
  printf("Enter the first mark: ");
  scanf("%f",&mark1);
  printf("Enter the second mark: ");
  scanf("%f",&mark2);
  // prints average
  sum = mark1 + mark2;
  printf("%.2f",sum/2);
  return 0;
}

