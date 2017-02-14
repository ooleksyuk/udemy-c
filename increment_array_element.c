/*
 * =====================================================================================
 *
 *       Filename:  increment_array_element.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/01/2017 11:27:26
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
        int x[] = {1,2,3,4,5,6,7,8,9};
	int i, *p;
	clr();
	p = x;
	for (i = 0; i < 9; i++)
	{
		printf("\n \tArray Elements x[%d] is %d", i, *p);
		printf("\n \tArray Elements x[%d] is %d", i, *p + 5);
		printf("\n \tArray Elements x[%d] is %d", i, *p * 5);
		p++;
	}

	getchar();
}
