#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <int,int> a,pair <int,int> b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,idx = 0,co = 0;
    cin >> n;
    pair <int,int> A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        A[i] = {a,b};
    }
    sort(A,A+n,cmp);
    int st = 0;
    for (int i = 0; i < n; i++)
    {
        if (st <= A[i].first)
        {
            st = A[i].second;
            co++;
        }
        // cout << A[i].first << " " << A[i].second << "\n";
    }
    cout << co;
    return 0;
}