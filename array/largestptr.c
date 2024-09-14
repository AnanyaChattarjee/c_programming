#include<stdio.h>
int main(){
    int* p1,*p2,*p3;
    int largest=*p1;
    *p1=2;
    *p2=3;
    *p3=5;
    if (largest<*p2){
        largest = *p2;
    }
    if (largest<*p3){
        largest = *p3;
    }
    printf("largest number=%d",largest);
    return 0;
}