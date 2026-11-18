#include<stdio.h>>
int main()
{
    int a[5],i,key;
    printf("Enter 5 elements:");
    for (i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("Enter elements to search: ");
    scanf("%d",&key);
    for (i=0;i<5;i++)
    {
        if (a[i]==key)
        {
            printf("Element found at position %d",i+1);
            return 0;
        }
    }

    printf("Element not found");
    return 0;
}
