/*
 * =====================================================================================
 *
 *       Filename:  bigger_number.c
 *
 *    Description:  Compare two numbers and print result to the output
 *
 *        Version:  1.0
 *        Created:  04/20/2017 09:59:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdlib.h>
#include<stdio.h>

int main() {
  system("clear");
  float num1, num2;

  printf("Enter two numbers to compare ");
  scanf("%f%f", &num1, &num2);

  if (num1 == num2) {
    printf("Numbers are equal");
  } else if (num1 > num2) {
    printf("%f is larger than %f", num1, num2);
  } else {
    printf("%f is larger than %f", num2, num1);
  }
  getchar();
  return 0;
}
