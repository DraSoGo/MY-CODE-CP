#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,x = 0;
    cin >> n;
    string A[n],m;
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> m;
    cout << m << "\n";
    for (int i = 0; i < n; i++)
    {
        if (A[i] == m)
        {
            cout << i+1 << " ";
            x++;
        }
    }
    if (x == 0)
    {
        cout << x;
    }
    
}