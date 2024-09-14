#include<stdio.h>
int factorial(int x){
    int i,p=1;
    for(i=2;i<=x;i++){
        p=p*i;
    }
    return p;
}
int combination(int a, int b){
    int fact;
    fact = factorial(a)/(factorial(b)*factorial(a-b));
    return fact;
}
int main(){
    int n;
    int r,com;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    com = combination(n,r);
    printf("combination:%d",com);
    return 0;
}