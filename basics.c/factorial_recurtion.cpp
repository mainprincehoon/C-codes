#include <iostream>
using namespace std;

int factorial(int p)
{
    if( p <= 1 ){
        return 1 ; 
    }
    else{
        return p * factorial(p-1);
    }
}
int main()
{
    int a ;
    cout << "Please Insert Number: "; 
    cin >> a; 
    int Number_factoral = factorial(a); 
    cout << Number_factoral ;
    return 0;
}