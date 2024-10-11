#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<string,int> &a,const pair<string,int> &b)
{
    if (a.second == b.second) 
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main() 
{
    int n, k;
    cin >> n >> k;
    vector<pair<string, int>> st(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> st[i].first >> st[i].second;
    }
    sort(st.begin(), st.end(), cmp);
    for (int i = 0; i < k; i++) 
    {
        cout << st[i].first << " " << st[i].second << "\n";
    }
    return 0;
}
