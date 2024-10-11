#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char x;
    cin >> x >> a >> b;
for (int k = 0; k < b; k++)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b*(b-k-1); j++)
        {
            cout << '.';
        }
        for (int l = 0; l <= k; l++)
        {
            for (int j = i; j < a-2; j++)
            {
                cout << '.';
            }
            for (int j = 0; j < 2*i+1; j++)
            {
                cout << x;
            }
            for (int j = i; j < a-1; j++)
            {
                cout << '.';
            }
        }
        for (int j = 0; j < b*(b-k-1); j++)
        {
            cout << '.';
        }
        cout << "\n";
    }
}    
    return 0;
}