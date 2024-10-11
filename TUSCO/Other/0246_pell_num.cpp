#include <bits/stdc++.h>
using namespace std;
int pell(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return 2*pell(n-1) + pell(n-2);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cout << pell(i) << " ";
    }
    
}