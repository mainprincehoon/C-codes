#include <stdio.h>
int main(){
    int count_1=0, count_2=0,  array[]= {1,2,3,4,5,7,8,9,10};
    for (int i=0;i<9;i++){
        if(i%2==0){
            count_1+=array[i];
        }
        else count_2+=array[i];
        
    }
    int diff=count_1-count_2;
    if(diff>0) printf("difference between the sum of elements at even indices to the sum of indices at odd indices %d",diff);
    else printf("difference between the sum of elements at even indices to the sum of indices at odd indices %d",diff*-1);
    return 0;
}