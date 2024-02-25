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
    int k,m;
    printf("enter number of times you want to rotate the array: ");
    scanf("%d", &k);
    m=k%n;
    for(int i=0; i<m; i++){
        temp=array[0];
        for (int i=0;i<n;i++){
            array[i]=array[i+1];
        }
        array[n-1]=temp;
    }
    
    printf("array after rotating the it to %d times is: \n", k); 
    for(int i=0;i<n;i++){
        printf("%d \n", array[i]);
    }
}