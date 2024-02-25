#include <stdio.h>
int equilibriumpoint(int* arr, int n){
    int sum_b = 0, sum_f = 0,eqq;
    for (int i = 0; i < n; i++){
        for (int j = i-1 ; j >= 0; j--)
        {
            sum_b += arr[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            sum_f += arr[k];
        }
        if (sum_b == sum_f)
        {
            eqq=arr[i];
            break;
        }
        else if(((i+1)==n) && sum_b != sum_f)
        {
            printf( "-1\n");
        }
        else
        {
            sum_b = 0;
            sum_f = 0;
            continue;
        }
        
    }
    return eqq;
    
}
int main()
{
    int n = 5;
    int arr[] = {1, 3, 5, 2, 2};
    printf( "the point of equilibrium is %d",equilibriumpoint(arr,n));
    return 0;
    
}