#include <iostream>
using namespace std;

void fib(int n) {
    int first = 0;
    int second = 1;
    int next;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
            next = i;
        else
        {
        next = first + second;
        first = second;
        second = next;
        }
        cout << next << endl;
    }
} 
    

int main()
{
    int n;
    cout << "Hello world!\n";
    cout << "N = "; cin >> n;
    cout << "fib(n) = \n";
    fib(n);
    return 0;
}