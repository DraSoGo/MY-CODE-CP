#include <bits/stdc++.h>
using namespace std;

long long X[4];

void pr(int a,int t)
{
    if (t == 1)
    {
        if (a == 4)
        {
            X[0] += 2;
        }
        else if (a == 6)
        {
            X[0] += 1;
            X[1] += 1;
        }
        else if (a == 8)
        {
            X[0] += 3;
        }
        else if (a == 9)
        {
            X[1] += 2;
        }
        else if (a == 10)
        {
            X[0] += 1;
            X[2] += 1;
        }
        else if (a == 2)
        {
            X[0] += 1;
        }
        else if (a == 3)
        {
            X[1] += 1;
        }
        else if (a == 5)
        {
            X[2] += 1;
        }
        else if (a == 7)
        {
            X[3] += 1;
        }
    }
    else
    {
        if (a == 4)
        {
            X[0] -= 2;
        }
        else if (a == 6)
        {
            X[0] -= 1;
            X[1] -= 1;
        }
        else if (a == 8)
        {
            X[0] -= 3;
        }
        else if (a == 9)
        {
            X[1] -= 2;
        }
        else if (a == 10)
        {
            X[0] -= 1;
            X[2] -= 1;
        }
        else if (a == 2)
        {
            X[0] -= 1;
        }
        else if (a == 3)
        {
            X[1] -= 1;
        }
        else if (a == 5)
        {
            X[2] -= 1;
        }
        else if (a == 7)
        {
            X[3] -= 1;
        }
    }
}

bool cmd(pair<long long,pair<long long,long long>> a,pair<long long,pair<long long,long long>> b)
{
    if (a.second.first != b.second.first)
    {
        return a.second.first < b.second.first;
    }
    return a.second.second > b.second.second;
}

int main()
{
    long long n,m,a,b,c,z;
    cin >> n >> m;
    int G[m];
    memset(X,0,sizeof(X));
    memset(G,0,sizeof(G));
    vector <pair<long long,pair<long long,long long>>> A;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        A.push_back({a,{b,1}});
        A.push_back({a,{c+1,2}});
        G[b] = 1;
        G[c+1] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (G[i] == 0)
        {
            A.push_back({1,{i,1}});
        }
        
    }
    sort(A.begin(),A.end(),cmd);
    long long mx = 0,y,co = 0;
    for (int i = 0; i < A.size(); i++)
    {
        y = 1;
        pr(A[i].first,A[i].second.second);
        for (int i = 0; i < 4; i++)
        {
            y *= X[i]+1;
        }
        if (y > mx)
        {
            mx = y;
            co = 0;
        }
        if (y == mx)
        {
            co++;
        }
    }
    cout << mx << " " << co;
}