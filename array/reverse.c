#include <stdio.h>
void main()
{
int n, temp, sum =0, rem;
printf("enter no.");
scanf("%d\n",&n);
temp=n;
while (n!=0)
{
rem = n%10;
sum = sum + rem *rem *rem;
n=n/10;
}
if (temp== sum)
{
printf("no. Is armstrong");
}
else
{printf("no. Is not armstrong");
}
getch();
}