#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,a;
    cin >> n;
    unsigned long long A[n];
    vector <unsigned long long> O,E;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            E.push_back(a);
        }
        else
        {
            O.push_back(a);
        }
        
    }
    for (int i = 0; i < E.size(); i++)
    {
        cout << E[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < O.size(); i++)
    {
        cout << O[i] << " ";
    }
    
}