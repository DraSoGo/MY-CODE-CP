#include <bits/stdc++.h>
using namespace std;


struct ST
{
    int idx,sum;
    bool operator < (const ST & a)const
    {
        if (sum == a.sum)
        {
            return idx < a.idx;
        }
        return sum > a.sum;
        
    }
};

vector <ST> V;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,c;
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c;
        V.push_back({a,b*2+c});
    }
    sort(V.begin(),V.end());
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i].idx << " " << V[i].sum << "\n";
    }
    
    return 0;
}