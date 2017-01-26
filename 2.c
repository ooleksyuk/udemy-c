/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/18/2017 12:18:46
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
	int b, d, f;
	system("clear");
	printf("Enter value for variables b: ");
	scanf("%d", &b);
	system("clear");
	printf("Enter value for variables d: ");
	scanf("%d", &d);
	system("clear");
	printf("Adding b + d....\n");
	
	f = b + d;

	printf("%d + %d = %d", b, d, f);
	getchar();
}

