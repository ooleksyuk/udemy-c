/*
 * =====================================================================================
 *
 *       Filename:  interest.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/18/2017 13:11:18
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
	float amount, rate, time, interest;
	system("clear");
	printf("\n Enter the Pricipal amount ");
	scanf("%f", &amount);
	printf("\n Enter Iterest rate ");
	scanf("%f", &rate);
	printf("\n Enter time in a year ");
	scanf("%f", &time);
	interest = amount * time * rate / 100;
	printf("\n Simple interest is %f ", interest);
	getchar();
}
