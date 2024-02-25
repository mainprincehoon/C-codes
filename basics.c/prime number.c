#include <stdio.h>
int main(){
    int a=0;
    int n;
    printf("enter the number you want to check :");
    scanf("%d", &n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
      
    }
    if (n<0){printf("please enter a valid input");}
    else if (n==0) {printf("0 is neither composite nor prime");}
    else if (n==1) {printf("1 is neither composite nor prime");}
    else if(n==2){printf(" 2 is a prime number");}
    else if(a==0) {printf("the given number %d is prime", n);} 
    else {printf("the given number %d is composite", n);
    }


    return 0;
}

