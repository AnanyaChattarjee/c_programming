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
    int r,com,i,j;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        for (j=0;j<=i;j++){
        com = combination(i,j);
        printf("%d ",com);
        }
printf("\n");
    }
    return 0;
}