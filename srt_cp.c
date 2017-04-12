/*
 * =====================================================================================
 *
 *       Filename:  srt_cp.c
 *
 *    Description:  Copy strings
 *
 *        Version:  1.0
 *        Created:  04/06/2017 13:15:16
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
void gotoxy(int x, int y) {
  printf("%c[%d;%df", 0x1B, y, x);
}

void clr(){
  system("clear");
}

int main() {
  char s1[30], s2[30];
  int c;
  clr();
  gotoxy(10, 10);
  printf("Enter First String: ");
  gets(s1);
  clr();
  gotoxy(10, 10);
  printf("Enter Second String: ");
  gets(s2);
  clr();

  c = strcmp(s1, s2);
  gotoxy(10, 10);
  if (c == 0) {
    printf("The strings are equal");
  } else {
    printf("The strings are not equal");
  }
  getchar();
};
