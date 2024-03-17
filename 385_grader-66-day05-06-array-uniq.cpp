#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c;
    cin >> n;
    vector <int> V,N;
    for (int i = 0; i < n; i++)
    {

        cin >> a;
        c = 0;
        for (int j = 0; j < V.size(); j++)
        {

            if (a == V[j])
            {
                N.push_back(a);
                c = 1;
                break;
            }
        }
        if(c == 0);
        {
            V.push_back(a);
        }
    }
    for (int i = 0; i < V.size(); i++)
    {
        c = 0;
        for (int j = 0; j < N.size(); j++)
        {
            if (N[j] == V[i])
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            cout << V[i] << " ";
        }
    }
}