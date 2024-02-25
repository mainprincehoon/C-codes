#include <stdio.h>
int main(){
    int  array[5]={1,2,30,4,5}, max=array[0] , index;
    for(int i=0; i<5; i++){
        if(max<array[i]) {
            max=array[i];
            index=i;
            }

    }
    printf("maximum element in the array is %d jiska index hai %d", max, index );
    return 0;
}