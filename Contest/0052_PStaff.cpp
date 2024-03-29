#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <int,int> a,pair <int,int> b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie();
    int n,m,x,y,co = 0;
    cin >> n >> m;
    pair<int,int> B[m];
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        B[i] = {x,y};
    }
    sort(A,A+n);
    sort(B,B+m,cmp);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (B[j].first <= A[i] && B[j].second >= A[i])
            {
                B[j] = {-1,-1};
                co++;
                break;
            }
        }
    }
    
    cout << co;
    return 0;
}