#include <bits/stdc++.h>
using namespace std;
main()
{
    int n,b,f,g;
    vector <int> x;
    for (char i = 'A'; i < 'Z'; i++)
    {
        int ch = 1;
        for (int j = 2; j < int(i); j++)
        {
            if (int(i) % j == 0)
            {
                ch = 0;
                break;
            }
        }
        if (ch == 1)
        {
            x.push_back(int(i));
        }
    }    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        string A;
        char y;
        cin >> A;
        for (int j = 0; j < A.length(); j++)
        {
            int mn = INT_MAX;
            for (int k = 0; k < x.size(); k++)
            {
                if (abs(x[k] - A[j]) < mn)
                {
                    mn = abs(x[k] - A[j]);
                    y = x[k];
                }
            }
            cout << y;
        }
        cout << "\n";
    }
}