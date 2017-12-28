/*
 * =====================================================================================
 *
 *       Filename:  perfect_number.c
 *
 *    Description:  Perfect Numbers
 *
 *        Version:  1.0
 *        Created:  04/18/2017 08:05:08
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
  int num;

  printf("Enter perfect number\n");
  scanf("%d", &num);

  int sum = 0;
  for (int i = 1; i < num; i++) {
    if (num % i == 0) {
      sum = sum + i;
    }
  }

  if (sum == num) {
    printf("%d is a perfect number", num); 
  } else {
    printf("%d is not a perfect number", num);
  }

  getchar();
  return 0;
}
