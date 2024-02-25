#include<stdio.h>
#include<stdlib.h>

void fill(float a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=rand()%n+1;
    }
}

int search(float a[], int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x){
            return i ;
            break;
        }
        else if((i+1)==n){
            return -1;
            break;
        }
        else
        {
            continue;
        }
    } 
}

void show(float a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%f,",a[i]); 
    }
}


int main()
{
    int size, search_num;
    printf("Enter Size of array: ");
    scanf("%d",&size);
    float arr[size];
    fill(arr, size);

    printf("Insert Number you wanna Search: ");
    scanf("%d",&search_num);
    printf("Index of your Number is: %d\n",search(arr, size,search_num));
    show(arr, size);
    return 0;

}