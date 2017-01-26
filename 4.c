/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/26/2017 07:32:29
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

int main()
{
	long int b, d, f;
	system("clear");
	printf("\n \n \t Enter value for variables b: ");
	scanf("%ld", &b);
	system("clear");
	printf("\n \n \t Enter value for variables d: ");
	scanf("%ld", &d);
	system("clear");
	f = b * d;
	printf("\n \n \t %ld * %ld = %ld", b, d, f);
	getchar();
}
