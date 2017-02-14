/*
 * =====================================================================================
 *
 *       Filename:  pointer_to_pointer.c
 *
 *    Description:  Pointer to Pointer
 *
 *        Version:  1.0
 *        Created:  02/28/2017 08:25:43
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
	int c, a = 10, b, *p, **ptr;
	clr();
	p = &a;
	b = *p;
	c = p;
	ptr = &p;
	gotoxy(10, 10);
	printf("The value of 'a' is %d \n", a);
        printf("a %d is stored at address %u \n", a, &a);
	printf("*p %d is stored ad address %u \n", *p, p);
	printf("b %d is stored at address %u \n", b, &b);
	printf("c %d is stored at address %u \n", c, &c);
	printf("**ptr %d is stored at address %u \n", **ptr, ptr);
	printf("Assigning value 5 to variable a \n");
	a = 5;
	printf("a %d is stored at address %u \n", a, &a);
	printf("*p %d is stored ad address %u \n", *p, p);
	printf("b %d is stored at address %u \n", b, &b);
	printf("c %d is stored at address %u \n", c, &c);
	printf("**ptr %d is stored at address %u \n", **ptr, ptr);
	int ***ptr2;
	ptr2 = &ptr;
	printf("***ptr2 %d is stored at address %u \n", ***ptr2, ptr2);

	getchar();
}
