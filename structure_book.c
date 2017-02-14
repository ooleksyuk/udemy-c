/*
 * =====================================================================================
 *
 *       Filename:  structure_book.c
 *
 *    Description:  Structure Book
 *
 *        Version:  1.0
 *        Created:  03/05/2017 14:34:47
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
struct book{
	char name[256];
	char author[256];
	int pages;
	float price;
};
int main() {
	struct book b1;
	printf("Enter book name, author, number of pages and price:\n");
	scanf("%s %s %i %f", &b1.name, &b1.author, &b1.pages, &b1.price);
	printf("You have entered:\n");
	printf("name: %s,\n author: %s,\n pages: %i,\n price: %f\n", b1.name, b1.author, b1.pages, b1.price);

	printf("Size of book %d\n", sizeof(b1));
	printf("Memory address of name %u\n", &b1.name);
	printf("Memory address of author %u\n", &b1.author);
	printf("Memory address of pages %u\n", &b1.pages);
	printf("Memory address of price %u\n", &b1.price);
}
