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

  // variable declaration
  int n,x,sum = 0;
  // taking user inputs
  printf("Enter the number you want the sum upto: ");
  scanf("%d",&n);
  // loop for the condition
  for ( x = 0; x < n; x++ )
    sum = sum + (x+1);
  // prints the sum
  printf("sum = %d",sum );
  return 0;
}

