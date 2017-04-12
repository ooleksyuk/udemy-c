/*
 * =====================================================================================
 *
 *       Filename:  str_swap.c
 *
 *    Description:  Swap two strings without using the third variable
 *
 *        Version:  1.0
 *        Created:  04/06/2017 14:24:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void gotoxy(x, y) {
  printf("%c[%d;%df", 0x1B, y, x);
}

void clr() {
  system("clear");
}

int main () {
  char first[100], second[100], *tmp;
  clr();
  gotoxy(10, 10);
  printf("Enter the first string\n");
  gotoxy(10, 11);
  gets(first);

  clr();
  gotoxy(10, 10);
  printf("Enter the second string\n");
  gotoxy(10, 11);
  gets(second);

  tmp = (char *)malloc((strlen(first) + 1) * sizeof(char));

  strcpy(tmp, first);
  strcpy(first, second);
  strcpy(second, tmp);

  clr();

  gotoxy(10, 10);
  printf("First string: %s\n", first);
  gotoxy(10, 11);
  printf("Second string: %s\n", second);

  return 0;
}

