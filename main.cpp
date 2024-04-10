#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) 
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        int first = 0;
        int second = 1;
        int next = 1;
        for (int i = 2; i < n; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }
        return next;
    } 
        
}

int main()
{
    int n;
    cout << "Hello world!\n";
    cout << "N = "; cin >> n;
    cout << "fib(n) = " << fib(n) << endl;
    return 0;
}