#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        printf("enter the value of element number %d : ",i);
        scanf("%d",&a[i]); }
        for(i=0;i<n;i++)  {
        sum=a[i] +sum; 

    
    printf("%d",sum); }
    return 0;
}