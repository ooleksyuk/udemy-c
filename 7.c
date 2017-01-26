/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/26/2017 09:14:05
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
void clr()
{
	system("clear");
}

int main()
{
	long int a, b;
	clr();
	gotoxy(10,10);
	printf("Enter your grade: ");
	scanf("%ld", &a);
	if (a > 40 && a < 60){
		b = 1;
	} else if (a >= 60 && a <= 70) {
		b = 2;
	} else if (a > 70 && a < 100) {
		b = 3;
	}
	
	switch(b)
	{
		case 1:
			printf("\n \t You'll be good at Arts");
		case 2:
			printf("\n \t You'll be god at Commerce");
		case 3:
			printf("\n \t You'll be good at Science");
		break;
		default:
			printf("\n \tDefault");
	}
}
