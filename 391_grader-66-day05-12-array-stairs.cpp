#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    vector <int> V;
    cin >> a;
    while (a >= 0 && a <= 9)
    {
        V.push_back(a);
        for (int i = 0; i < V.size(); i++)
        {
            cout << V[i];
        }
        cout << "\n";
        cin >> a;
    }
    
}