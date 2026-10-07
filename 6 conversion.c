#include<stdio.h>
void main()
{
    int deci,bin=0,i,rem;
    printf("Enter number in decimal");
    while(deci!=0)
    {
        rem=deci%2;
        bin=bin+rem*i;
        i=i*10;
        deci=deci/2;
    }
    printf("%d",bin);
}
