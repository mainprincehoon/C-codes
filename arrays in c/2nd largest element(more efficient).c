#include <stdio.h>
#include<limits.h>
int main(){
    int  array[5]={5,4,3,5,1} ,max=INT_MIN,max2=INT_MIN;
    for(int i=0; i<5; i++){
        if(max<array[i]) {
            max2=max;
            max=array[i];
        }
        else if (max2<array[i] && array[i] != max){
            max2=array[i];
        }
    }
    printf("2nd maximum element in the array is %d", max2);
    return 0;
}
//lekin isme index kaise pata lagaaye?