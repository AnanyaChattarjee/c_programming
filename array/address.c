#include <stdio.h>
int main(){
    int i, a[5]={1,23,45,67,89};
    for (i=0;i<=5;i++){
        printf("the address:%p\n",&a[i]);
    }   
    return 0;
}