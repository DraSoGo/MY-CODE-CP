#include <bits/stdc++.h>
using namespace std;

bool cmd(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
    if (a.first.first != b.first.first)
    {
        return a.first.first < b.first.first;
    }
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    if (a.second == 1 || b.second == 1)
    {
        return a.first.second > b.first.second;
    }
    return a.first.second < b.first.second;
}

int main()
{
    multiset <int,greater <int>> S;
    vector <pair<pair<int,int>,int>> A;
    S.insert(0);
    int n,s,w,e;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> w >> e;
        A.push_back({{s,w},1});
        A.push_back({{e,w},2});
    }
    sort(A.begin(),A.end(),cmd);
    int mx = 0,mxs;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i].second == 2)
        {
            S.erase(S.find(A[i].first.second));
        }
        else
        {
            S.insert(A[i].first.second);
        }
        mxs = *S.begin();
        if (mxs != mx)
        {
            mx = mxs;
            cout << A[i].first.first << " " << mx << " ";
        }
        
    }
}