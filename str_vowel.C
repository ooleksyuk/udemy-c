/*WRITE A C PROGRAM TO CHECK THE ENTERED ALPHABET IS VOWEL OR NOT */
/*NOTE THE CHARACTER SHOULD BE CAPITAL */

#include <stdio.h>
#include <conio.h>

void main()
{
  char ch;
  clrscr();
  printf("Enter a character ");
  ch=getch();

if(ch==65)
{
printf("%c is Vowel",ch);
}
else
if(ch==69)
{
printf("%c is Vowel",ch);
}
else
if(ch==73)
{
printf("%c is Vowel",ch);
}
else
if(ch==79)
{
printf("%c is Vowel",ch);
}
else
if(ch==85)
{
printf("%c is Vowel",ch);
}
else

printf("The Character %c is not vowel",ch);

getch();

}