#include<stdio.h>
int main(){
    int a[5],i;
    for(i=0;i<=5;i++){
        printf("enter %d element:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=5;i++){
    if (a[i]<=33){
        printf("%d",i);
    }
    }
    return 0;
}
