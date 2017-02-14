/*
 * =====================================================================================
 *
 *       Filename:  addition_two_numbers.c
 *
 *    Description:  Addition of two numbers
 *
 *        Version:  1.0
 *        Created:  03/05/2017 13:33:28
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
int addition(int, int);
int main(){
	int a, b, sum, mult;
	printf("Add and multiply two numbers!\n");
	printf("Enter first number ");
	scanf("%d", &a);
	printf("Enter second number ");
	scanf("%d", &b);
	sum = addition(a, b);
	printf("\nSum of two numbers is %d", sum);
	mult = multiplication(a, b);
	printf("\nMultiplication of two numbers is %d", mult);
	getchar();
}
int multiplication(int a, int b) {
	return a * b;
}
int addition(int a, int b) {
	return a + b;
}
