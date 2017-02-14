/*
 * =====================================================================================
 *
 *       Filename:  array_of_strings.c
 *
 *    Description:  Array of Cahacters and Strings
 *
 *        Version:  1.0
 *        Created:  02/28/2017 07:50:36
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
	int c, a = 10, b, *p;
	clr();
	p = &a;
	b = *p;
	c = p;
	gotoxy(10, 10);
	printf("The value of 'a' is %d \n", a);
	printf("%d is stored at address %u \n", a, &a);
	printf("%d is stored ad address %u \n", *p, p);
	printf("%d is stored at address %u \n", b, &b);
	printf("%d is stored at address %u \n", c, &c);

	getchar();
}
