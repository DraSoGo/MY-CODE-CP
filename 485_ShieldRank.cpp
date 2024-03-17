#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    int n,p;
    cin >> x >> n >> p;
    int y = 2*n+1;
    for (int i = 0; i < (2*n+1)*p; i++)
    {
        for (int j = 0; j < (2*n+1) * p; j++)
        {
            if (i == j || i + j - 1 == (2*n)*p)
            {
                cout << '#';
            }
            else if (i % y == (j % y) || i % y == n || (j % y) == n || i % y + (j % y) == 2*n)
            {
                cout << "+";
            }
            else if ((i % y) + (j % y) <= 3*n && (i % y) + (j % y) >= n && (i % y) - (j % y) <= n && (j % y)-(i % y) <= n)
            {
                cout << x;
            }
            else
            {
                cout << ".";
            }
            
        }
        cout << "\n";
    }
    return 0;
}