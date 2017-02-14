/*
 * =====================================================================================
 *
 *       Filename:  array_of_struc.c
 *
 *    Description:  Array of elements type struct book
 *
 *        Version:  1.0
 *        Created:  03/05/2017 16:35:18
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
	struct book b[10];

	int max_number_of_entered_books;
	printf("How many books would you like to add to the database: ");
	scanf("%i", &max_number_of_entered_books);
	printf("\n\tYou entered %i book(s)\n", max_number_of_entered_books);
	printf("\nPlease enter information about books: \n");
	printf("Book name || Book author || Number of pages || Book price\n");
	for(int i = 0; i < max_number_of_entered_books; i++) {
		printf("Book # %i. ", i + 1);
		printf("name: ");
		scanf("%s", &b[i].name);
		printf("author: ");
		scanf("%s", &b[i].author);
		printf("number of pages: ");
		scanf("%i", &b[i].pages);
		printf("price: ");
		scanf("%f", &b[i].price);
	}
	system("clear");
	printf("Book name\t|| Book author\t|| Number of pages\t|| Book price\n");
	for(int j = 0; j < i; j++) {
		printf("%i. %s\t||%s\t||%i\t||$%f\t||\n", j + 1, b[j].name, b[j].author, b[j].pages, b[j].price);
	}
	getchar();
}

