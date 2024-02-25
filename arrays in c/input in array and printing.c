#include <stdio.h>
int main(){
    int n;
    printf("enter the no of elements you want in array: ");
    scanf("%d", &n);
    int array[n];
    for(int i=0;i<n;i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    for(int i=0;i<n;i++){
        printf("array[%d]: ", i);
        printf("%d", array[i]);
        printf("\n");
    }
    return 0;
}
