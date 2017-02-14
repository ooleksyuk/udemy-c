/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/03/2017 13:14:40
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
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i  == 5)
			{
				printf("i + j: %d + %d = %d;\n", i, j, i + j);
			} else {
				break;
			}

			if (i == 4) {
				continue;
				printf("The value of i is %d", i);
			}
		}
	}
}
