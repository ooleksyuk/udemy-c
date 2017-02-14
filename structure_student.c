/*
 * =====================================================================================
 *
 *       Filename:  structure_student.c
 *
 *    Description:  Structures. Student example
 *
 *        Version:  1.0
 *        Created:  03/05/2017 14:06:49
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
struct student{
	char name[10];
	int roll_number;
	int marks[10];
};
int main(){
	system("clear");
	struct student s1, s2;
	printf("Enter student's name: ");
	scanf("%s", &s1.name);
	printf("Enter student's roll number: ");
	scanf("%d", &s1.roll_number);
	printf("Enter student's marks: ");
	for (int i = 0; i < 10; i++) {
		printf("%d. ", i + 1);
		scanf("%d", &s1.marks[i]);
	}
	system("clear");
	printf("\nStudent's name is %s", s1.name);
	printf("\nStudent's roll number is %d", s1.roll_number);
	printf("\nStudent's marks are ");
	for (int j = 0; j < i; j++) {
		printf("%d ", s1.marks[j]);
	}
	getchar();
}
