#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements: ";
    cin>>n;
    int  array[n];
    for(int i=0; i<n; i++){
        printf("array[%d]: ", i);
        cin>>array[i];
    }
    int count=0;
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(array[i]==array[j]){
                count++;
                sum = array[i];
                break;
            }
            else {
                continue;
                }
        }
    }
    if(count==1){
        cout<< "there is a duplicate and the duplicate number is: "<< sum;
    }
    else{
        cout<< "there was no duplicate element in array";
    }
}