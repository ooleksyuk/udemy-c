/*
 * =====================================================================================
 *
 *       Filename:  prime_number.c
 *
 *    Description:  Check for Prime numbers
 *
 *        Version:  1.0
 *        Created:  04/18/2017 08:50:04
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

  printf("Enter number: ");
  scanf("%d", &num);

  int count = 0;
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      count++;
      break;
    }
  }

  if (count == 0 && num != 1) {
    printf("%d is a prime number", num);
  } else {
    printf("%d is not a prime number", num);
  }

  getchar();
  return 0;
}
