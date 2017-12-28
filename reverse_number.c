/*
 * =====================================================================================
 *
 *       Filename:  reverse_number.c
 *
 *    Description:  Reverse a 5-digit number enterered thourgh keyboard
 *
 *        Version:  1.0
 *        Created:  04/12/2017 08:06:07
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
#include<ctype.h>

void clr() {
  system("clear");
}

int isNumber(char s[5]) {
  int isNum = 0;
  for (int i = 0; i < (unsigned)strlen(s); i++) {
    if (isalpha(s[i]) == 0) {
      isNum = 1;
    } else {
      isNum = 0;
      break;
    }
  }
  return isNum;
}

int isLonger(char s[255], int num) {
  return (unsigned)strlen(s) != num;
}

int main() {
  char s[255];
  int count = 5;

  do {
    printf("Enter %d digit number ", count);
    gets(s);
  } while (isLonger(s, count));

  while(!isNumber(s)) {
    printf("Enter numbers only: ");
    gets(s);
  }

  char new_s[count];
  for (int j = 0; j < (unsigned)strlen(s); j++) {
    new_s[j] = s[count - j - 1]; 
  }
  clr();
  printf("\nOriginal number: %s", s);
  printf("\nReversed number: %s", new_s);
  getchar();
  return 0;
}
