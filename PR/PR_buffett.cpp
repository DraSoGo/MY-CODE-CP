#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.second < b.second;
}

int main() 
{
    int m;
    cin >> m;
    int ch = 0,lt = 0;
    vector<pair<int,int>> w(m);
    for (int j = 0; j < m; j++)
    {
        cin >> w[j].first >> w[j].second;;
    }
    sort(w.begin(),w.end(),cmp);
    for (int i = 0; i < m; i++)
    {
        if (w[i].first >= lt)
        {
            ch++;
            lt = w[i].second;
        }
    }
    cout << ch << "\n";
}
