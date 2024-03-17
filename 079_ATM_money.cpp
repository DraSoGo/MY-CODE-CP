#include <bits/stdc++.h>
using namespace std;
main()
{
    int b1000 = 100,b500 = 100,b100 = 100,b;
    cin >> b;
    int B[b];
    for (int i = 0; i < b; i++)
    {
        cin >> B[i];
        while (B[i] >= 100)
        {
            if(B[i] >= 1000)
            {
                b1000--;
                B[i] = B[i] - 1000;
            }
            else if(B[i] >= 500 && B[i] < 1000)
            {
                b500--;
                B[i] = B[i] - 500;
            }
            else if(B[i] >= 100 && B[i] < 500)
            {
                b100--;
                B[i] = B[i] - 100;
            }
        }    
    }
    cout << "1000 = " << b1000 << "\n" << "500 = " << b500 << "\n" << "100 = " << b100;
}