#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    vector <int> V;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (V.empty())
        {
            V.push_back(x);
        }
        else
        {
            if (x >= V.back())
            {
                V.push_back(x);
            }
            else
            {
                V[upper_bound(V.begin(),V.end(),x) - V.begin()] = x;
            }
        }
    }
    cout << V.size();
    
    return 0;
}