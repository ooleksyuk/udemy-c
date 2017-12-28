/*
 * =====================================================================================
 *
 *       Filename:  arythmetic_progression.c
 *
 *    Description:  Write a function to calculate arythmetic progression
 *
 *        Version:  1.0
 *        Created:  04/12/2017 13:48:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<math.h>

int main() {
  int num1, numn, diff, sum;
  system("clear");
  printf("\nEnter first number of A.P.: ");
  scanf("%d", &num1);
  printf("\nEnter difference for A.P.: ");
  scanf("%d", &diff);
  printf("\n Enter last number of A.P.: ");
  scanf("%d", &numn);

  sum = diff*(num1 + numn)/2;
  printf("Sum of arithmetic progression: %d", sum); 
  getchar();
  return 0;
}
