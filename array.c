/*
 * =====================================================================================
 *
 *       Filename:  array.c
 *
 *    Description:  Arrays
 *
 *        Version:  1.0
 *        Created:  02/14/2017 09:15:59
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
	clr();
	float e[5];
	printf("Enter elements of the array: \n");
	for (int i = 0; i < 5; i++) {
		scanf("%f", &e[i]);
	}
	printf("Elements of an array e:\n ");
	for (int j = 0; j < i; j++) {
		printf("%f ", e[j]);
	}
	printf("Memory map for the Array of Elements!");
	for (int f = 0; f < i; f++) {
		printf("\n the variable e[%d] the value %f at Memory address %d", f, e[f], &e[f]);
	}
}

