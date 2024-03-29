#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.second < b.second;
}

int main() 
{
    int n,m;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        int ch = 0,lt = 0;
        cin >> n;
        vector<pair<int,int>> w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> w[i].second;
        }
        sort(w.begin(),w.end(),cmp);
        for (int i = 0; i < n; i++)
        {
            if (w[i].first >= lt)
            {
                ch++;
                lt = w[i].second;
            }
                                    
        }
        cout << ch << "\n";
    }
    
}
