#include <stdio.h>
void swap(int* x, int* y){
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);
    printf("your entered values of a and b are %d, %d respectively \n", a,b);
    swap(&a,&b);
     printf("your values of a and b after swapping are %d, %d respectively", a,b);

    return 0;
}

