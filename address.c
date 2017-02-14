/*
 * =====================================================================================
 *
 *       Filename:  address.c
 *
 *    Description:  Pring my full address to the output
 *
 *        Version:  1.0
 *        Created:  03/05/2017 13:09:54
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
void address();
int age(int);

int main()
{
	clr();
	address();
	getchar();
	printf("\nMy age is %d", age(2));
	getchar();
}
void address(){
	printf("14 Mystic St\nBedford, LA 03456-1234");
}
int age(int number){
	return number;
}
