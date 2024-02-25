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
    int i=0;
    int j=n-1;
    while(i<j){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;

    }
    printf("array after perform reverse action is \n"); 
    for(int i=0;i<n;i++){
        printf("%d \n", array[i]);
    }
    return 0;
}

