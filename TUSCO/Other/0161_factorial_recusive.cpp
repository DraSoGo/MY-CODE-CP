#include <bits/stdc++.h>
using namespace std;
int Fact(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * Fact(a-1);
    }
    
}
int main()
{
    int a;
    cin >> a;
    cout << Fact(a);
}
