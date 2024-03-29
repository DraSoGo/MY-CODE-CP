#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<double,pair<double,double>> &a,const pair<double,pair<double,double>> &b)
{
    return a.second.second > b.second.second;
}

int main() 
{
    double n,m,mx;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        double ch = 0,lt = 0;
        cin >> n >> mx;
        vector<pair<double,pair<double,double>>> w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i].first >> w[i].second.first;
            w[i].second.second = w[i].first/w[i].second.first;
        }        
        sort(w.begin(),w.end(),cmp);       
        for (int i = 0; i < n; i++)
        {
            if (mx - w[i].second.first >= 0)
            {
                ch = ch + w[i].first;
                mx = mx - w[i].second.first;
            }
            else
            {
                lt = mx/w[i].second.first;
                lt = lt*w[i].first;
                ch = ch + lt;
                break;
            }
        }
        cout << fixed << setprecision(2) << ch << "\n";
    }
    
}
