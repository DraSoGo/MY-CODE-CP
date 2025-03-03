#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("gymnastics.in", "r", stdin);
    // freopen("gymnastics.out", "w", stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k,n,x,co = 0;
    cin >> k >> n;
    // map <pair<int,int>,int> ANS;
    int ANS[n+1][n+1];
    memset(ANS,0,sizeof(ANS));
    for (int i = 0; i < k; i++)
    {
        vector <int> V;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            V.push_back(x); 
        }
        for (int j = 0; j < n-1; j++)
        {
            for (int l = j+1; l < n; l++)
            {
                // cout << j << " " << l << " - ";
                ANS[V[j]][V[l]]++;
                ANS[V[j]][V[l]] == k ? co++:co = co;
            }
        }
        // cout << "\n";
    }
    cout << co;
    return 0;
}