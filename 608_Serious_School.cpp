#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <pair<int,int>,int> a,pair <pair<int,int>,int> b)
{
    if (a.first.second - a.first.first == b.first.second - b.first.first)
    {
        return a.second > b.second;
    }
    
    return a.first.second - a.first.first < b.first.second - b.first.first;
}

int main()
{
    vector <pair<pair<int,int>,int>> V;
    pair <pair<int,int>,int> v;
    int A[100000];
    int s,n,ta = 999999,sum,t,x = 0;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v.first.first >> v.first.second >> v.second;
        x += v.second;
        V.push_back(v);
    }
    sort(V.begin(),V.end(),cmp);
    if (x < 100-s)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            memset(A,0,sizeof(A));
            sum = V[i].second;
            t = V[i].first.second - V[i].first.first + 1;
            int ch;
            for (int k = V[i].first.first; k < V[i].first.second; k++)
            {
                A[k]++;
            }
            for (int j = i+1; j < n; j++)
            {
                ch = 0;
                for (int k = V[j].first.first; k < V[j].first.second; k++)
                {
                    if (A[k] + 1 > 1)
                    {
                        ch = 1;
                        break;
                    }
                    A[k]++;
                }
                if (ch == 1)
                {
                    continue;
                }
                t += V[j].first.second - V[j].first.first + 1;
                sum += V[j].second;
                if (sum > 100-s)
                {
                    ta = min(ta,t);
                    break;
                }
            }
        }
        if (ta == 999999)
        {
            ta = -1;
        }
        cout << -1;
    }
    return 0;
}