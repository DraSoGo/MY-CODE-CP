#include <bits/stdc++.h>
using namespace std;

bool cmd(pair<string,int> a,pair<string,int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string p;
    int m,n,x,i = 0;
    vector <pair<string,int>> A;
    cin >> n >> m;
    while (n--)
    {
        cin >> p >> x;
        A.push_back({p,x});
    }
    sort(A.begin(),A.end(),cmd);
    while (m--)
    {
        cout << A[i].first << " " << A[i].second << "\n";
        i++;
    }
    
}