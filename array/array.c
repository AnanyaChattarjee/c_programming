#include<stdio.h>
int main(){
    int a[5] = {2,4,6,8,3};
    a[3]=4;
    printf("%d",a[3]);
    int b[4],i;
    for(i=0;i<=3;i++){
    printf("enter the number:");
    scanf("%d",&b[i]);
    }
    for(i=0;i<=3;i++){
    printf("%d,",b[i]);
    }
    return 0;
}