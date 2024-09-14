#include<stdio.h>
int main(){
    int arr[7]={11,22,33,44,55,66,77};
    int i,j,n;
    int count=0;
    printf("enter the number:");
    scanf("%d",&n);
    printf("pairs are:\n");
    for (i=0;i<=7;i++){
    for (j=i+1;j<=7;j++){
        if ((arr[i]+arr[j])==n){
            printf("%d, %d\n",i,j);
            count+=1;
        }
    }
    
    }
    printf("total number of pairs are:%d",count);
    return 0;
}