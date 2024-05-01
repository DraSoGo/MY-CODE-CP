#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    string x;
    cin >> n;
    while (n--)
    {
        unordered_map <char,int> A;
        int ev = 0,od = 0;
        cin >> x;
        for (int i = 0; i < x.size(); i++)
        {
            A[x[i]]++;
        }
        for(auto j:A)
        {
            if (j.second % 2 == 0)
            {
                ev++;
            }
            else
            {
                od++;
            }
        }
        if (ev <= 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
        // cout << ev << " " << od << "\n";
    }
    
    return 0;
}