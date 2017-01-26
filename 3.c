/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/18/2017 13:05:42
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

int main() {
	long int b, d, f;
	system("clear");
	printf("Enter value for variables b: ");
	scanf("%ld", &b);
	system("clear");
	printf("Enter value for variables d: ");
	scanf("%ld", &d);
	system("clear");
	f = b * d;
	printf("%ld * %ld = %ld", b, d, f);
	getchar();
}

