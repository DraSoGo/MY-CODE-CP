#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int A[a],x = a;
    if (b == 1)
    {
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < a; i++)
        {

            if (x + 1 == A[i])
            {
                cout << 1;
                x = x + 1;
            }
            else
            {
                cout << 0;
                x = x - 1;
            }
            cout << "\n";
        }
        
    }
    if (b == 2)
    {
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < a; i++)
        {

            if (x + x == A[i])
            {
                cout << 1;
                x = x + x;
            }
            else
            {
                cout << 0;
                x = x - 1;
            }
            cout << "\n";
        }
        
    }
    return 0;
}