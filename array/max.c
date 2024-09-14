#include<stdio.h>
int main(){
    int arr[5]={23,32,34,54,65};
    int i;
    int max=arr[0];
    for (i=0;i<=5;i++){
    if (max<arr[i]){
        max=arr[i];
    }
    }
    printf("max number is: %d",max);
    return 0;
}