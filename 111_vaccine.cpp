#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,f,b,p,x = 0;
    cin >> n;
    int S[n];
    for (int i = 0; i < n; i++)
    {
        cin >> f >> b >> p;
        int s = (f*b) - p;
        S[i] = s;
    }
    for (int i = 0; i < n; i++)
    {
        cout << S[i] << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        x = x + S[i];
    }
    cout << x;
}