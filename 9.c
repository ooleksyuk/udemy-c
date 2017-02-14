/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2017 08:16:12
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
	long int a, b, x;
	x = 1;
	while(x <= 2) {
		clr();
		gotoxy(10, 10);
		printf("Enter number of subjects student #%li should take: ", (long)x);
		scanf("%li", &a);
		gotoxy(10, 12);
		printf("Enter minimal passing grade value: ");
		scanf("%li", &b);
		printf("Student #%li should take %li subjects and earn at least %li grade to pass.", x, a, b);
		x++;
	}

	do {
		printf("\nHello world\t");
		x++;
	} while(x <= 5);

	int i;
	for (i = 0; i <= 10; i++) {
		printf("\nHello I am in a For loop: %d", i);
	}
}

