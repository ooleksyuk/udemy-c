/*
 * =====================================================================================
 *
 *       Filename:  array2.c
 *
 *    Description:  Arrays, Memorry maps
 *
 *        Version:  1.0
 *        Created:  02/22/2017 11:31:49
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
	int x[10] = { 12, 123, 324, 566, 456, 234, 456, 678, 234, 345 };
	gotoxy(10, 10);

	printf("Following is a memorry map for initialized array! \n");
	for (int i = 0; i < 10; i++) {
		printf("\n Variable x[%d] Value %d Memorry Address %u", i, x[i], &x[i]);
	}
	getchar();
}
