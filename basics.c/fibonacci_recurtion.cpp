#include <iostream>
using namespace std;

int fib(int p)
{
    if (p == 1)
    {
        return 1 ;
    }
    else if ( p <= 0 )
    {
        return 0 ;
    }
    else
    {
        return fib(p - 2) + fib(p - 1);
    }
}

int main()
{
    int num;
    cout << "Please insert number: ";
    cin >> num;
    cout<<fib(num-1);
    return 0;
}