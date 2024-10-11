#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,m,n;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string x = "A",y = "B",z = "BA";
        cin >> m >> n;
        for (int j = 0; j < m-2; j++)
        {
            z = y + x;
            x = y;
            y = z;
            if (z.length() >= n)
            {
                break;
            }
        }
        cout << z[z.length()-n] << "\n";
    }
}