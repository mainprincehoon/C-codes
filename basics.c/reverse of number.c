#include<stdio.h>
int main(){
    printf(("enter the number you want to reverse:"));
    int n;
    int x=0;
    scanf("%d",&n);
    while(n>0){
        x=x*10;
        x=x+ (n%10);
        n=n/10; 

    }
    printf("the reverse of your number is %d",x);
    return 0;
}