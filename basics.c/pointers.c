#include <stdio.h>
int main(){
    int a=5;
    int* x= &a;
    printf("%d \n", *x);
    *x=3;
    printf("%d \n", *x);
    printf("%p \n", x);
    printf("%p", &x);
    return 0;
}