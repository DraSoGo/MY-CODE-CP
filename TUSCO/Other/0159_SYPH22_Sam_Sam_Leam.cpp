#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,ch1 = 0,ch2,x = 1,y = 0,l = 1;
    cin >> n;
    char N[n];
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    sort(N,N+n);
    for (int i = 0; i < n; i++)
    {
        if (N[i-1] != N[i])
        {
            ch1++;
        }
    }
    ch2 = 2*ch1-1;
    for (int i = 0; i < n; i++)
    {
        if (N[i-1] !=N[i] )
        {
            for (int j = 0; j < ch2; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 2*x-1; j++)
            {
                cout << N[i];
                y = j;
            }
            x++;
            ch2--;
            cout << "\n";
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (N[i-1] !=N[i] )
        {
            for (int j = 0; j < ch2; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < l; k++)
            {
                cout << N[i];
            }
            for (int k = 0; k < 2*ch2+1; k++)
            {
                cout << " ";
            }
            for (int k = 0; k < l; k++)
            {
                cout << N[i];
            }
            l+=2;
            x++;
            ch2--;
            cout << "\n";
        }
    }
}