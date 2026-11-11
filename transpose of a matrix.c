#include<stdio.h>
void main()
{
    int A[2][2],T[2][2],C[2][2],i,j;
    printf("enter 4 values for A matrix");
    for (i=0;i<2;i++)
       {
           for (j=0;j<2;j++)
       {
           scanf("%d",&A[i][j]);
       }
       }
  for (i=0;i<2;i++)
       {
    for (j=0;j<2;j++)
        {
          T[i][j]=A[i][j];
        }
       }

        printf("Transpose of a matrix=\n");
         printf("\n");
for (i=0;i<2;i++)
{
     for (j=0;j<2;j++)
     printf("%d\t",T[i][j]);
        printf("\n");
}
}
