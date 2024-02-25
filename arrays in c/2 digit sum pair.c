#include <stdio.h>
int main(){
    int n,m;
    printf("enter number of elements in array: ");

    scanf("%d",&n);

    printf("number daalo jiske sum ka pair tumko chahiye: ");
    scanf("%d",&m);
    
    int array[n];
    for(int i=0;i<n;i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    int count=0; 
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]+array[j]==m) {
                count++;
                printf("your pairs are (%d,%d)\n", array[i],array[j]);
            }
            
        }
        
        
    }
    printf("\n");
    printf("the number of pairs are %d", count);
    return 0;
}
