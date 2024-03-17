#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,y;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> x >> y;
        if (x >= y)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << "\n";
    }
}