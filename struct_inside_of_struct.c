/*
 * =====================================================================================
 *
 *       Filename:  struct_inside_of_struct.c
 *
 *    Description:  Implementing one structure inside of another structure
 *
 *        Version:  1.0
 *        Created:  03/06/2017 08:05:21
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
struct author {
	char first_name[256];
	char last_name[256];
};
struct book {
	char name[256];
	int pages;
	struct author author;
	float price;
};
struct user {
	int card_no;
	char first_name[256];
	char last_name[256];
	int age;
};
struct library {
	struct book books[10];
	struct user users[10];
};
struct library get_library_data(int no_books, int no_users) {
	struct library lib;
	for (int i = 0; i < no_books; i++) {
		printf("%d. Enter book name: ", i + 1);
		scanf("%s", &*lib.books[i].name);
		printf("Enter number of pages in the book: ");
		scanf("%d", &lib.books[i].pages);
		printf("Enter author's first name: ");
		scanf("%s", &*lib.books[i].author.first_name);
		printf("Enter author's last name: ");
		scanf("%s", &*lib.books[i].author.last_name);
		printf("Enter price for the book: ");
		scanf("%f", &lib.books[i].price);
	}
	for (int j = 0; j < no_users; j++) {
		printf("%d. Enter user's first name: ", j + 1);
		scanf("%s", &*lib.users[j].first_name);
		printf("Enter user's last name: ");
		scanf("%s", &*lib.users[j].last_name);
		printf("Enter user's card number: ");
		scanf("%d", &lib.users[j].card_no);
		printf("Enter user's age: ");
		scanf("%d", &lib.users[j].age);
	}
	return lib;
};
int main() {
	int no_books;
	int no_users;
	struct library lib;
	printf("Entre number of books you would like to add to the database: ");
	scanf("%d", &no_books);
	printf("Enter number of users fo rthe library: ");
	scanf("%d", &no_users);
	system("clear");
	lib = get_library_data(no_books, no_users);
	system("clear");

	if (no_books > 0) {
		printf("\n\n# \t Name \t Author \t Pages \t Price($)");
	}
	for (int f = 0; f < no_books; f++) {
		printf("\n%d. \t %s \t %s %s \t %d \t %f", f + 1, lib.books[f].name, lib.books[f].author.first_name, lib.books[f].author.last_name, lib.books[f].pages, lib.books[f].price );
	}
	if (no_users > 0) {
		printf("\n\n# \t Library Card Number \t User's Name \t User's Age");
	}
	for(int g = 0; g < no_users; g++) {
		printf("\n%d. \t %d \t\t\t %s %s \t %d", g + 1, lib.users[g].card_no, lib.users[g].first_name, lib.users[g].last_name, lib.users[g].age);
	}
	getchar();
}
