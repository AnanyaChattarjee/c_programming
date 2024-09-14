#include<stdio.h>
void main()
{
    int n, a[10],i;
    printf("enter number:");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\nbinary number is ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    getch();
    }
