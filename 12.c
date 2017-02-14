/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/03/2017 13:43:17
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
        printme:printf("Welcome home\n");

	printf("This is test");
	getchar();
}
