#include<stdio.h>
void average(int* avg, int* sum, int* count){
    *avg=*sum/ *count;
    return;
}
int main(){
    int array[]={9,18,27,1,2,3,4,5};
    int avg, sum=0, count=0;
    for(int i=0;i<8;i++){
        if(array[i]%9==0){
            sum+=array[i];
            count++;
        }
    }
    average(&avg,&sum,&count);

printf("%d", avg);
    return 0;
}