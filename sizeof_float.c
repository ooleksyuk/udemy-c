/*
 * =====================================================================================
 *
 *       Filename:  sizeof_float.c
 *
 *    Description:  Find sizeof Float number without using sizeof function
 *
 *        Version:  1.0
 *        Created:  04/20/2017 08:27:12
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
  
  char *num;
  printf("Enter float number ");
  scanf("%s", num);
  long int size;
  for(int i = 0; num[i] != '\0'; i++) {
    size++;
  }

  system("clear");
  printf("Calculated size is %lu\n", size);
  getchar();
  return 0;
}
