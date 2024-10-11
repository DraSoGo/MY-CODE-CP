#include <bits/stdc++.h>
using namespace std;
main()
{
    int x = 10000000;
    vector <int> V;
    for (int i = 0; i <= x; i++)
    {
        V.push_back(1);
    }
    for (int i = 2; i*i <= x; i++)
    {
        if (V[i] != 2)
        {
            V[i] = 1;
            for (int j = i*i; j <= x; j+=i)
            {
                V[j] = 2;
            }
        }
    }
    int a,n;
    cin >> n;
    for (int i = 0; i <= 2; i++)
    {
        V[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (V[a] == 1)
        {
            cout << "Maybe";
        }
        else
        {
            cout << "Impossible";
        }
        cout << "\n";
    }
}