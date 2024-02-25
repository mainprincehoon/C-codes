#include <stdio.h>
int min(int a, int b){
    if(a>b){return b;}
    else {return a;}

}
int hcf(int a, int b){
    int x;
    for(int i=min(a,b);i>=1;i--){
          if(a%i==0 && b%i==0){
            x=i;
            break;
          }
    return x;      
    }
}
int main(){
    int a,b;
    printf("enter numbers to find HCF: ");
    scanf("%d %d", &a,&b);
    int x=hcf(a,b); 
    printf("the HCF of %d and %d is: %d", a,b,x);
    return 0;
}