#include <bits/stdc++.h>
using namespace std;

vector <int> V,ANS[5001],st = {0};
int val[5] = {-2,-1,0,1,2},c = 1;

void gen(int n)
{
    if (c == 5001)
    {
        return;
    }
    if (V.size() == n)
    {
        for (int i = V.size()-1; i >= 0; i--)
        {
            ANS[c].push_back(val[V[i]]);
            // cout << val[V[i]] << " ";
        }
        c++;
        // cout << "\n";
        return;
    }
    if (V.size() == 0)
    {
        V.push_back(3);
        gen(n);
        V.pop_back();
        V.push_back(4);
        gen(n);
        V.pop_back();
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        V.push_back(i);
        gen(n);
        V.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ANS[0] = st;
    int t,n;
    cin >> t;
    
    for (int i = 1; i < 8; i++)
    {
        gen(i);
    }
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < ANS[abs(n)].size(); i++)
        {
            cout << (abs(n)/n)*ANS[abs(n)][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}