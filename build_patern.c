/*
 * =====================================================================================
 *
 *       Filename:  build_patern.c
 *
 *    Description:  Build a pattern with Stars
 *
 *        Version:  1.0
 *        Created:  04/20/2017 11:25:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main() {
  system("clear");
  int lines = 3;
  printf("Enter a number of lines in a pattern ");
  scanf("%d", &lines);

  int spaces = lines;
  for (int k = 0; k < lines; k++) {
    for (int l = spaces; l < lines - 1; l++) {
      printf(" ");
    }
    spaces--;
    for (int j = 1; j <= 2 * k - 1; j++) {
      printf("*");
    }

    printf("\n");
  }

  getchar();
  return 0;
}
