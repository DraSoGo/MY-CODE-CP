#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<long long,pair<long long,long long>> &a,const pair<long long,pair<long long,long long>> &b)
{
    return a.second.second > b.second.second;
}

int main() 
{
    long long n,m,ch,A[10000];
    cin >> m;
    for (int k = 0; k < m; k++)
    {
        memset(A,0,sizeof(A));
        long long dl = 0,sum = 0;
        cin >> n;
        vector<pair<long long,pair<long long,long long>>> w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i].first >> w[i].second.first >> w[i].second.second;
        }
        sort(w.begin(),w.end(),cmp);
        for (int i = 0; i < n; i++)
        {
            ch = 0;
            for (int j = w[i].second.first; j >= 1; j--)
            {
                if (A[j] == 0)
                {
                    A[j] = 1;
                    ch = 1;
                    break;
                }
            }
            if (ch == 1)
            {
                dl++;
                sum = sum + w[i].second.second;
            }
        }
        cout << dl << " " << sum << "\n";
    }
    
}
