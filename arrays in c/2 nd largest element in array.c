#include <stdio.h>
#include<limits.h>
int main(){
    int  array[5]={5,4,5,2,1} ,max=INT_MIN,max2=INT_MIN,  index;
    for(int i=0; i<5; i++){
        if(max<array[i]) {
            max=array[i];
            }
    }
    for(int i=0; i<5; i++){
        if(array[i]<max && max2<array[i]) {
            max2=array[i];
            index=i;
            }
    }
    printf("maximum element in the array is %d jiska index hai %d", max2, index );
    return 0;
}