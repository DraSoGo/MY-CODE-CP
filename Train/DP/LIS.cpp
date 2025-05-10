#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin >> n;
    vector <int> V;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        int idx = lower_bound(V.begin(),V.end(),x)-V.begin();
        if (idx >= V.size())
        {
            V.push_back(x);
        }
        else
        {
            V[idx] = x;
        }
        
    }
    cout << V.size();
    return 0;
}
/*
INPUT
10
1 3 4 2 1 7 8 9 2 0
OUTPUT
6
*/