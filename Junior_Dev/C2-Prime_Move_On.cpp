#include <bits/stdc++.h>
using namespace std;
 
 
const int p = 1e7+5e6;
int PW[p],X[p];
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,y,idx,a,b;
    vector <int> V;
    bool P[p];
    cin >> x >> y;
    P[1] = 1;
    for (int i = 2; i < p; i++)
    {
        if (P[i] == 0)
        {
            if (i == y)
            {
                idx = V.size();
            }
            if (i > x)
            {
                break;
            }
            V.push_back(i);
            for (int j = i*i; j < p; j+=i)
            {
                P[j] = 1;
            }
        }
    }
    for (int i = 0; i < idx; i++)
    {
        V.push_back(V[i]);
    }
    int c = 1;
    for (int i = idx; i < V.size(); i++)
    {
        X[V[i]] = c;
        c++; 
    }
    
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (X[b] == 0)
        {
            cout << -1;
        }
        else
        {
            cout << X[b];
        }
        cout << "\n";
 
    }
    
    return 0;
}   