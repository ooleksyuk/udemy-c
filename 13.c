/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/03/2017 13:46:19
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
	goto printme;
	for (int i = 0; i <= 5; i++) {
		printf("i = %d", i);
		if (i == 5) {
			printme:printf("Hello world! I am in.\n");
		}
		printf("i = %d\n", i + 1);
	}
	printf("\nThis is test");
	getchar();
}
