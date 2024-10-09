#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2*n-1; j++)
            {
                if (i+j >= n-1 && abs(i-j) <= n-1 && i % 2 == 0 && j % 2 == 0)
                {
                    cout << "*";
                }
                else if (i+j >= n-1 && abs(i-j) <= n-1 && i % 2 == 1 && j % 2 == 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2*n-1; j++)
            {
                if (i+j >= n-1 && abs(i-j) <= n-1 && i % 2 == 1 && j % 2 == 0)
                {
                    cout << "#";
                }
                else if (i+j >= n-1 && abs(i-j) <= n-1 && i % 2 == 0 && j % 2 == 1)
                {
                    cout << "*  ";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    
    
    return 0;
}