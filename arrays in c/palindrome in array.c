#include <stdio.h>
int main(){
    int n, count=0;
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
        if(array[i]!=array[j]) {
            count++;
            break;
        }
        i++;
        j--;
    }
    if(count==0) printf("provided array is in palindrome");
    else printf("provided array is not in palindrome");
    return 0;
}

