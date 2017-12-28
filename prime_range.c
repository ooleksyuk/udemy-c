/*
 * =====================================================================================
 *
 *       Filename:  prime_range.c
 *
 *    Description:  Print all prime numbers in range
 *
 *        Version:  1.0
 *        Created:  04/18/2017 09:00:26
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
  system("clear");

  printf("Enter a number ");
  scanf("%d", &num);
  printf("Prime numbers in range from 2 to %d.\n", num);
  int isPrime;
  for (int i = 2; i <= num; i++) {
    isPrime = 0;
    for (int j = 2; j < i / 2; j++) {
      if (i % j == 0) {
        isPrime = 1;
        break;
      }
    }
  
    if (isPrime == 0 && num != 1) {
      printf("%d\t", i);
    }
  }

  getchar();
  return 0;
}
