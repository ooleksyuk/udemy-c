/*write a c program to print the size of a float variable without using sizeof() */
#include<stdio.h>

int main(){

  float *ptr = 0;

  ptr++;
  printf("Size of float data type:  %d",ptr);

  getch();

}
