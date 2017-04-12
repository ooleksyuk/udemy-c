/*
 * =====================================================================================
 *
 *       Filename:  leap_year.c
 *
 *    Description:  Determine if entered number is a leap year or not
 *
 *        Version:  1.0
 *        Created:  04/06/2017 16:00:59
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

int main() {
  char s[10];
  int year;
  do {
    printf("Enter 4 digit year: ");
    gets(s);
  } while ((unsigned)strlen(s) > 4);
  
  int isNumber = 0;
  for (int i = 0; i < (unsigned)strlen(s); i++) {
    if (isalpha(s[i]) == 0) {
      isNumber = 1;
    } else {
      isNumber = 0;
      break;
    }
  }

  while (!isNumber) {
    printf("Enter only digits: ");
    gets(s);
    int isNumber = 0;
    for (int i = 0; i < (unsigned)strlen(s); i++) {
      if (isalpha(s[i]) == 0) {
        isNumber = 1;
      } else {
        return isNumber = 0;
      }
    }
  }

  year = atoi(s);

  if ((year % 4 != 0) || (year % 400 != 0)) {
    printf("It's not a leap year");
  } else if (year % 100 != 0) {
    printf("It's a leap year");
  } else {
    printf("It's a leap year");
  }
  getchar();
  return 0;
}

