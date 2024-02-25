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
    temp=array[0];
    for (int i=0;i<n;i++){
        array[i]=array[i+1];
    }
    array[n-1]=temp;
    
    printf("array after shifting 1 element to left \n"); 
    for(int i=0;i<n;i++){
        printf("%d \n", array[i]);
    }
    return 0;
}