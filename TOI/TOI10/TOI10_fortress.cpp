#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    for (int i = 0; i < 20; i++)
    {
        cin >> m >> n;
        if (n >= m || 4*n-m > m || 4*n-m < 0)
        {
            cout << 0 << "\n";
            continue;
        }
        cout << (4*n-m)/2+1 << "\n";
    }
    return 0;
}