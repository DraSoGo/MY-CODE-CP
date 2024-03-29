#include <bits/stdc++.h>
using namespace std;
int fib(int a)
{
    if (a == 1 || a == 2)
    {
        return 1;
    }
    else
    {
        return fib(a-1)+fib(a-2);
    }
    
    
}
int main() 
{
    int a;
    cin >> a;
    for (int i = 1; i < a; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}