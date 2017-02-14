/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2017 07:49:28
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
	int a, b, x;
	x = 1;
	while(x <= 5) {
		clr();
		gotoxy(10, 10);
		printf("Enter any two values! ");
		scanf("%d%d", &a, &b);
		a = a + b;
		printf("The addition of two numbers is %d ", a);
		x++;
	}
	getchar();
}
