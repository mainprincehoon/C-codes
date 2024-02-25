#include <stdio.h>
int main(){
    int n,temp;
    printf("enter the no of elements you want in array: ");
    scanf("%d", &n);
    int array[n];
    for(int i=0;i<n;i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    for(int i=0, j=n-1;i<j; i++, j--){    // for me pehle initialization fir condition fir increment/decrement
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;

    }
    printf("array after perform reverse action is \n"); 
    for(int i=0;i<n;i++){
        printf("%d \n", array[i]);
    }
    return 0;
}

