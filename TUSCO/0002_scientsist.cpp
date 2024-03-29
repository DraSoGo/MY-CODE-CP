#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx = -999999;
    cin >> n;
    int S[n];
    for (int i = 0; i < n; i++)
    {
        int vi,ti;
        cin >> vi >> ti;
        S[i] = vi * ti;
    }
    for (int i = 0; i < n; i++)
    {
        if (S[i] > mx)
        {
            mx = S[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (S[i] == mx)
        {
            cout << i + 1;
            break;
        }
        
    }
    
    
    return 0;
}