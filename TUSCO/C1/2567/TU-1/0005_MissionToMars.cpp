#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
        {
            cout << "True\n";
        }
        else
        {
            cout << "False\n";
        }
        
    }
    
    return 0;
}