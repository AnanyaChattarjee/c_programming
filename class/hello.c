#include<stdio.h>
    long factorial(int n)
    {
        if(n==0)
        return 1;
        else
        return (n*factorial(n-1));
    }
    void main()
    {
        int n ;
        long fact;
        printf("enter the number");
        scanf("%d",&n);
        fact=factorial(n);
        printf("factorial %d is %ld\n",n,fact);
        getch();
    }
    
    
    
