#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,c=0;
    cin >> n;
    if (n % 2 == 0)
    {
        x = n-1;
    }
    else
    {
        x = n;
    }
    y = n;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i <= y/2 && (j == (x/2)-i || j == (x/2) + i))
            {
                cout << "*";
            }
            else if (i >= y/2 && (j == 0+c || j == x-1-c))
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
            
        }
        if (i >= y/2)
        {
            c++;
        }
        cout << "\n";
    }
}