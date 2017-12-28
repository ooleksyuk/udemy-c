/*
 * =====================================================================================
 *
 *       Filename:  string_compare.c
 *
 *    Description:  Write custom string compare function
 *
 *        Version:  1.0
 *        Created:  04/12/2017 12:45:07
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
int strcmp_cust1(char *s1, char *s2);
int strcmp_cust2(char *s1, char *s2);

int main() {
  char s1[255], s2[255];
  system("clear");
  printf("\nEnter string 1: ");
  gets(s1);
  printf("\nEnter string 2: ");
  gets(s2);
  int res = strcmp_cust2(s1, s2);

  if (res) {
    printf("\nStrings are equal");
  } else {
    printf("\nStrings are different");
  }

  getchar();
  return 0;
}

int strcmp_cust2(char *s1, char *s2) {
  int res;
  
  if (strlen(s1) != strlen(s2)) {
    return 0;
  }

  for (int i = 0; i < strlen(s1); i++) {
    if (s1[i] != s2[i]) {
      return 0;
    } else {
      res = 1;
    }
  }
  return res;
}

int strcmp_cust1(char *s1, char *s2) {
  int res, i = 0;
  while (s1[i] != '\0' || s2[i] != '\0') {
    if (s1[i] != s2[i]) {
      res = 0;
      break;
    } else {
      res = 1;
    }
    i++;
  }
  return res;
}
