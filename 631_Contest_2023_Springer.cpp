#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long m,n,c,mx = 0;
    vector <long long> A;
    A.push_back(1);
    cin >> m >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> c;
        A.push_back(c);
    }
    A.push_back(m);
    for (long long i = 1; i < A.size(); i++)
    {
        if (i != 1 && i != A.size()-1)
        {
            mx = max(mx,(A[i]-A[i-1])/2);
        }
        else
        {
            mx = max(mx,A[i]-A[i-1]);
        }
    }
    cout << mx;
}