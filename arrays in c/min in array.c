#include <stdio.h>
int main(){
    int  array[5]={10,2,30,4,5}, min=array[0] , index;
    for(int i=0; i<5; i++){
        if(min>array[i]) {
            min=array[i];
            index=i;
            }

    }
    printf("minimum element in the array is %d jiska index hai %d", min, index );
    return 0;
}
