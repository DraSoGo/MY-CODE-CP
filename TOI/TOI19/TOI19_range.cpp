#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int idx,l,r;
    bool operator < (const pos & a)const
    {
        if (r == a.r)
        {
            return l > a.l;
        }
        return r < a.r;
    }
};


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,l,r;
    cin >> n;
    pos A[n];
    int ANS[n];
    vector <int> V;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        A[i] = {i,l,r};
    }
    sort(A,A+n);
    for (int i = 0; i < n; i++)
    {
        int idx = upper_bound(V.begin(),V.end(),-A[i].l)-V.begin();
        if (idx >= V.size())
        {
            V.push_back(-A[i].l);
            ANS[A[i].idx] = V.size();
        }
        else
        {
            V[idx] = -A[i].l;
            ANS[A[i].idx] = idx+1;
        }
    }
    cout << V.size() << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ANS[i] << " ";
    }
    
    return 0;
}