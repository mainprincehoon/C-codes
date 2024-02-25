#include<stdio.h>

int missingnumber(int* arr, int n)
{
    int missing_number;
    int d,d1,d2;
    d1 = arr[1]-arr[0];
    d2 = arr[2]-arr[1];


    if(d1==d2)
    {
        d = d1 ;
    }
    else
    {
        printf( "series is not in 1 to N\n");
    }

    int a = arr[0];
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==a)
        {
            a += d;
            continue;
        } 
        else
        {
            missing_number = a;
        }
    }
    return missing_number;
}

int main(){
    int N = 5 ;
    int A[] = {1,2,3,5};    
    printf( "the missing element is %d",missingnumber(A,N));   
    return 0;
}
