/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/03/2017 12:56:47
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
	int i = 0;
	int number;
	clr();
	while (i < 10) {
		printf("\nEnter number: ");
		scanf("%d", &number);
		gotoxy(10, 10);
		printf("-----\n");
		printf("| %d | ", i * number);
		i++;
	};

}
