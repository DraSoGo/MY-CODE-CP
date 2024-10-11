#include <bits/stdc++.h>
using namespace std;
main()
{
    long long a,summax = -999999999,b;
    cin >> a;
    long long A[a],B[a];
    if (a == 1)
    {
        cin >> b;
        if (b > 0)
        {
            cout << b << "\n" << b;
        }
        else
        {
            cout << "Empty sequence";
        }
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            cin >> A[i];
            B[i] = 999999;
        }
        for (int i = 0; i < a; i++)
        {
            long long sum = A[i];
            for (int j = i+1; j < a; j++)
            {            
                sum = sum + A[j];
                if (sum > summax)
                {
                    summax = sum;
                    int x = 0;
                    for (int k = 0; k < a; k++)
                    {
                        B[k] = 999999;
                    }
                    for (int k = i; k <= j; k++)
                    {
                        B[x] = A[k];
                        x++;
                    }
                    
                }
            }
        }
        
        if (summax > 0)
        {
            for (long long i = 0; i < a; i++)
            {
                if (B[i] == 999999)
                {
                    break;
                }
                cout << B[i] << " ";
            }
            cout << "\n" << summax;
        }
        else
        {
            cout << "Empty sequence";
        }
        
    }
    
    
}