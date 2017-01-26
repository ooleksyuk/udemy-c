/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/26/2017 08:48:39
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

void gotoxy(int x,int y)
{
	printf("%c[%d;%df",0x1B,y,x);
}

int main()
{
	long int a, b;
	system("clear");
	gotoxy(10,10);
	printf("Enter values a and b: ");
	scanf("%ld %ld", &a, &b);
	(a >= b) ? printf("\n A is greater") : printf("\n B id greater");
}
