/*
 * =====================================================================================
 *
 *       Filename:  str_up.c
 *
 *    Description:  String upper
 *
 *        Version:  1.0
 *        Created:  04/06/2017 13:50:32
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
#include<ctype.h>

void gotoxy(x, y) {
  printf("%c[%d;%df", 0x1B, y, x);
}

void clr() {
  system("clear");
}

char *strupr(char *str)
{
  unsigned char *p = (unsigned char *)str;
  while (*p) {
    *p = toupper((unsigned char)*p);
    p++;
  }
  return str;
}

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;
  while (*p) {
    *p = tolower((unsigned char)*p);
    p++;
  }
  return str;
}

int main() {
  char name[255];
  clr();
  gotoxy(10, 10);
  printf("Enter string: ");
  gets(name);
  clr();
  strupr(name);
  gotoxy(10, 10);
  printf("Upper case string: %s", name);
  getchar();
  clr();
  strlwr(name);
  gotoxy(10, 10); 
  printf("Lower case string: %s", name);
  getchar();
}
