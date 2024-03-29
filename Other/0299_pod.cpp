#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,k;
    cin >> n >> k;
    int K[k];
    for (int i = 0; i < k; i++)
    {
        K[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        bool ch;
        int x;
        cin >> x;
        x--;
        K[x]++;
        for (int j = 0; j < k; j++)
        {
            if (K[j] >= 1)
            {
                ch = true;
            }
            else
            {
                ch = false;
                break;
            }
            
        }
        if (ch == true)
        {
            for (int j = 0; j < k; j++)
            {
                K[j]--;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + K[i];
    }
    cout << sum;
}