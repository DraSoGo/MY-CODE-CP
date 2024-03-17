#include <bits/stdc++.h>
using namespace std;

struct sword
{
    int atk;
    int def;
    bool operator < (const sword & b)const
    {
        if (atk == b.atk)
        {
            return def > b.def;
        }
        
        return atk > b.atk;
    }
};


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,mxatk = -1,mxdef = -1,ch,co = 0;
    cin >> n;
    sword A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].atk >> A[i].def;
    }
    sort(A,A+n);
    for (int i = 0; i < n; i++)
    {
        ch = 0;
        if (mxatk < A[i].atk)
        {
            mxatk = A[i].atk;
            ch = 1;
        }
        if (mxdef < A[i].def)
        {
            mxdef = A[i].def;
            ch = 1;
        }
        if (ch == 1)
        {
            co++;
        }
        //cout << A[i].atk << " " << A[i].def << "\n";
    }
    cout << co;
    return 0;
}