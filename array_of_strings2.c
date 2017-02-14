/*
 * =====================================================================================
 *
 *       Filename:  array_of_strings2.c
 *
 *    Description:  Work with array of strings
 *
 *        Version:  1.0
 *        Created:  03/01/2017 14:27:55
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
void hello();
int main()
{
	char *names[5] = {
		"Olga",
		"Peter",
		"Barbara",
		"John",
		"Dave"
			};
	void *p;
	int x[4] = {1,2,3,4};
	int a = 4;
	p = &a;
	clr();
	for (int i = 1; i < 5; i = i + 2) {
		printf("Value of names [%d] = %s\n", i, names[i]);
	}
	for (int j = 0; j < 4; j++) {
		printf("Printing elements of the array: %d: x[%d]\n", j, x[j]);
	}
	printf("Printing p: %d", *(int *)p);
	printf("\nPrints output of function hello()");
	hello();
	getchar();
}
void hello() {
	printf("\nHello my name is Jane");
}
