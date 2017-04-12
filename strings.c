/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Practicing functions on strings
 *
 *        Version:  1.0
 *        Created:  03/08/2017 07:53:20
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
char *(strrev(char input_string[25])) {
  int str_len = strlen(input_string);
  char new_str[25];
  for (int i = str_len - 1; i >= 0; i--) {
    strcat(new_str, input_string[i]);
  }
  return new_str;
}

int main() {
  char name[25];
  char name_cp[50];
  char new_name[255];
  int string_length;

  string_length = strlen(name);
  printf("\nLength of [name] before assignment %d", string_length);
  printf("\nEnter name: ");
  scanf("%s", &*name);
  string_length = strlen(name);
  printf("\nLength of [name] after assignment %d", string_length);
  printf("\nYou've entrered name [%s]", name);
  strcpy(name_cp, name);
  printf("\nCopy name into name_cp [%s] into [%s]", name, name_cp);
  printf("\nEnter your name again please: ");
  gets(new_name);
  printf("\nGets input is [%s]", new_name);
  strcat(name, name_cp);
  printf("\nName now is : %s", name);
  strrev(name);
  printf("\nName after reverse of the name : %s", name);
  getchar();

}
