/*
 * =====================================================================================
 *
 *       Filename:  str_check_vowel.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/06/2017 14:53:30
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

void gotoxy(x, y) {
  printf("%c[%d;%df", 0x1B, y, x);
}

int main() {
  char c, evalC;
  int isVowel;

  clr();
  gotoxy(10, 10);
  do {
    printf("Enter a letter of the alphabet: ");
    scanf("%c", &evalC);
    printf("Result of isalpha: %d", isalpha(evalC));
  } while (!isalpha(evalC));

  c = tolower(evalC);

  isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

  clr();
  gotoxy(10, 10);
  printf("You entered %c, ", evalC);
  if (isVowel == 1) {
    printf("it is a vowel.");
  } else {
    printf("it is a consonant.");
  }

  return 0;
}
