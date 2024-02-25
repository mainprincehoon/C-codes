#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;

}    
int nCr(int n, int r){
    int a;
    a=factorial(n)/(factorial(r)*factorial(n-r));  
    return a;
}
int nPr(int n, int r){
    int b;
    b=factorial(n)/(factorial(n-r));
    return b;
}
int main(){
    int n,r,q,w,e;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the value of r: ");
    scanf("%d",&r);
    printf("type: 1 for combination \ntype: 2 for permutation \n");
    scanf("%d", &q);
    w= nCr(n,r);
    e= nPr(n,r);
    if(q==1){printf("the value of your nCr(combination) is %d",w);}
    else{printf("the value of your nPr(permutation) is %d",e);}
    return 0;

}