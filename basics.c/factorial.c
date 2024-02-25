#include<stdio.h>
int main(){
    long long fact=1;
    int n;
    printf("enter the number:- ");
    scanf("%d", &n);
    while(n>0){
        fact=fact*n;
        
        n=n-1;

    }
    
printf("the factorial of your number is %lld", fact);
    return 0;
}