#include <bits/stdc++.h>
using namespace std;
main()
{
    int a = 10000,x = 1,b;
    cin >> b;
    int W[a],B[a],S[a];
    for (int i = 0; i < a; i++)
    {
        W[i] = pow(x,2);
        B[i] = 8 * x;
        S[i] = x + 2;
        x++;
    }
    for (int i = 0; i < b; i++)
    {
        int y,z;
        cin >> y >> z;
        for (int j = 0; j < a; j++)
        {
            if (W[j] > y || B[j] > z)
            {
                cout << S[j - 1] << "\n";
                break;
            }   
            else if (W[j] == y || B[j] == z)
            {
                cout << S[j] << "\n";
                break;
            }   
        }
    }
}