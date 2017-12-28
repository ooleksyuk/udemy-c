/*
 * =====================================================================================
 *
 *       Filename:  palindrome.c
 *
 *    Description:  Determine if the number is a palindrome
 *
 *        Version:  1.0
 *        Created:  04/12/2017 08:45:28
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

int isNumber(char *s) {
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

int main() {
  int str_len = 255;
  char s[str_len];
  clr();
  while(!isNumber(s)) {
    printf("\nEnter a number to check for Palindrome: ");
    gets(s);
  }

  char result[str_len];
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    result[i] = s[len - i - 1];
  }

  char *res_txt;
  if (atoi(s) == atoi(result)) {
    res_txt = "palindrome";
  } else {
    res_txt = "not a palindrome";
  }

  printf("\nEntered number %d is a %s", atoi(s), res_txt); 
  getchar();
  return 0;
}
