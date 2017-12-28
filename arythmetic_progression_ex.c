 /* Write a c program to find out the sum of in A.P. series .


*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){

    int a,d,n,i,tn;
    int num,num1,num2;
    int sum=0;

    printf("Enter the first number of the A.P. series: ");
    scanf("%d",&num);

    printf("Enter the total numbers in the A.P. series: ");
    scanf("%d",&num1);

    printf("Enter the common difference of A.P. series: ");
    scanf("%d",&num2);

    sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
    tn = a + (n-1) * d;
    printf("Sum of the series A.P.: ");

    for(i=a;i<=tn; i= i + d ){
         if (i != tn)
             printf("%d + ",i);
         else
             printf("%d = %d ",i,sum);
    }

getch();

}



