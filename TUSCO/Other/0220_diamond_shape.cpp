#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i <= n/2) && (j >= n/2-i && j <= n/2+i))
            {
                cout << "+";
            }
            else if ((i > n/2) && (j >= 0+x && j <= n-x-1))
            {
                cout << "+";
            }
            else
            {
                cout << "#";
            }
            
        }
        if (i > n/2)
        {
            x++;
        }
        cout << "\n";
    }
    
}