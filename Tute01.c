/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2,avg;
   
   printf("Enter the mark of subject 1:");
   scanf("%d",&mark1);
   
   printf("Enter the mark of subject 2:");
   scanf("%d",&mark2);
   
   avg=(mark1+mark2)/2;
   
   printf("The average of the 2 marks:%d",avg);
   
  
  return 0;
}

