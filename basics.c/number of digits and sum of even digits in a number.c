#include<stdio.h>
int main(){
    int count=0;
    int c=0;
    int sum=0;
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    
    while(a!=0){
        c=a%10;
        a=a/10;
        count++;
       
        if(c%2==0) {sum=sum+c;}
        else {continue;}
    }
    
    printf("the number has %d digits in it\n", count);
    printf("the sum of even digits in this number is %d", sum);
    
    return 0;
}