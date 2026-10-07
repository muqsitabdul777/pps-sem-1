#include<stdio.h>
void main()
{
    int deci,oct,i=1,rem;
    printf("Enter number in decimal");
    scanf("%d",&deci);
    while(deci!=0)
    {
        rem=deci%8;
        oct=oct+rem*i;
        i=i*10;
        deci=deci/8;
    }
    printf("%d",oct);
}
