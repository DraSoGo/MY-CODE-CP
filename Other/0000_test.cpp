#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, c = 0, ck = 0;
    int itemp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> itemp[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (itemp[i] == x)
        {
            ck = 1;
        }
    }
    if (ck == 0)
    {
        cout << "Item not found in the bag";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (x == itemp[i] && c == 0)
        {
            c = 1;
            continue;
        }
        if (x != itemp[i] || c == 1)
        {
            cout << itemp[i] << " ";
        }
    }
    cout << "0";
}