#include <bits/stdc++.h>
using namespace std;

vector <int> bc;
int mn = INT_MAX;
int m,n;

bool cmd(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
    if (a.first.first == b.first.first)
    {
        return a.first.second < b.first.second;
    }
    return a.first.first < b.first.first;
    
}

void Bco (int x,int k,vector <pair<pair<int,int>,int>> V)
{
    if (bc.size() == k)
    {
        int sum = 0;
        int a,x = 0,y = 0;
        for (int i = 0; i < x; i++)
        {
            if (bc[i] == 1)
            {
                a = sqrt(pow(x-V[i].first.first,2) + pow(y-V[i].first.second,2));
                x = V[i].first.first;
                y = V[i].first.second;
                sum = sum + a - V[i].second;
            }
        }
        a = sqrt(pow(x-m,2) + pow(y-n,2));
        sum += a;
        mn = min(sum,mn);
        return;
    }
    else
    {
        bc.push_back(0);
        Bco(x+1,k,V);
        bc.pop_back();
        bc.push_back(1);
        Bco(x+1,k,V);
        bc.pop_back();
    }
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k,s,e,p;
    //cin >> k;
    cin >> m >> n >> k;
    vector <pair<pair<int,int>,int>> V;
    for (int i = 0; i < k; i++)
    {
        cin >> s >> e >> p;
        V.push_back({{s,e},p});
    }
    sort(V.begin(),V.end(),cmd);
    Bco(0,k,V);
    cout << mn;
}