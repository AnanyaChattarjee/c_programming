#include<stdio.h>
int main(){
    int a[5],i;
    for(i=0;i<=5;i++){
        printf("enter %d element:",i);
        scanf("%d",&a[i]);
    }
    printf("array in reverse\n ");
    for(i=5;i>=0;i--){
        printf("%d\n",a[i]);
       
    }
    
    return 0;
}