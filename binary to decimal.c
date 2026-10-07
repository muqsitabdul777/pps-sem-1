#include<stdio.h>
#include<math.h>
void main()
{long bin;
    int deci=0,i=0,rem;
    printf("Enter number in binary (0s and 1s)");
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        deci=deci+rem*pow(2,i);
        i++;
    }
    printf("%d",deci);
}
