/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/26/2017 07:56:51
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
	printf("Enter value that is smaller than 50:\n");
	gotoxy(10,12);
	scanf("%ld", &a);
	system("clear");
	if (a < 50)
	{
		gotoxy(10,10);
		printf("Value you entrered is: %ld", a);
		system("clear");
	} else {	
		gotoxy(10,10);
		printf("Value is wrong, try again. Enter value that is smaller than 50:\n");
		gotoxy(10, 12);
		scanf("%ld", &a);
		system("clear");
	}
	getchar();
}
