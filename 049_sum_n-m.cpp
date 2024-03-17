#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,m,sum = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        sum = i + sum;
        cout << i;
        if(i != m)
        {
            cout << "+";
        }
    }
    cout << "=" << sum;
    
}