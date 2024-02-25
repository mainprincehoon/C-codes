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
    temp=array[n-1];
    for (int i=n-1;i>0;i--){
        array[i]=array[i-1];
    }
    array[0]=temp;
    
    printf("array after shifting 1 element to right \n"); 
    for(int i=0;i<n;i++){
        printf("%d \n", array[i]);
    }
    return 0;
}