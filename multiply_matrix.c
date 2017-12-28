 /* write a c coad using Strassen algorithm for multiplication of two matrix [2x2]*/


#include<stdio.h>
#include<conio.h>

void main(){
  int x[2][2],y[2][2],t[2][2],i,j;
  int M1,M2,M3,M4,M5,M6,M7;

  printf("ENTER 4 ELEMENTS FOR Ist MATRIX ");
  for(i=0;i<2;i++)
      for(j=0;j<2;j++)
           scanf("%d",&x[i][j]);

  printf("ENTER 4 ELEMENTS FOR IInd MATRIX ");
  for(i=0;i<2;i++)
      for(j=0;j<2;j++)
           scanf("%d",&y[i][j]);

  printf("\nThe first matrix is\n");
  for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",a[i][j]);
  }

  printf("\nThe second matrix is\n");
  for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",b[i][j]);
  }

  M1= (x[0][0] + x[1][1])*(y[0][0]+y[1][1]);
  M2= (x[1][0]+x[1][1])*y[0][0];
  M3= x[0][0]*(y[0][1]-y[1][1]);
  M4= x[1][1]*(y[1][0]-y[0][0]);
  M5= (x[0][0]+x[0][1])*y[1][1];
  M6= (x[1][0]-x[0][0])*(y[0][0]+y[0][1]);
  M7= (x[0][1]-x[1][1])*(y[1][0]+y[1][1]);

  t[0][0]=M1+M4-M5+M7;
  t[0][1]=M3+M5;
  t[1][0]=M2+M4;
  t[1][1]=M1-M2+M3+M6;

   printf("\n AFTER THE MULTIPLICATION ");
   for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",t[i][j]);
   }

   getch();
}