#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,idx;
    vector <int> LIS;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        idx = upper_bound(LIS.begin(),LIS.end(),x) - LIS.begin();
        if (idx == LIS.size())
        {
            LIS.push_back(x);
        }
        else
        {
            LIS[idx] = x;
        }
    }
    cout << n - LIS.size();
    return 0;
}