#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,ch,b,mn,x;
    cin >> a;
    vector <int> A;
    for (int i = 2; i < 200000; i++)
    {
        b = 0;
        for (int j = 2; j*j <= i; j++)
        {
            if (i % j == 0)
            {
                b = 1;
                break;
            }
        }
        if (b == 0)
        {
            A.push_back(i);
        }
    }
    for (int i = 0; i < a; i++)
    {
        ch = 0;
        mn = 1000000;
        cin >> n;
        if (n < 10)
        {
            mn = 6;
            ch = 1;
        }
        if (ch == 0)
        {
            for (int j = 0; j < n; j++)
            {
                x = n/A[j];
                int l = 0;
                if (x != 0)
                {
                    while ((x > A[l]))
                    {
                        l++;
                    }
                    if (A[l] == A[j])
                    {
                        l++;
                    }
                    if ((abs(n - mn) > abs(n - (A[j]*A[l]))) && A[j]*A[l] >= n)
                    {
                        mn = A[j]*A[l];
                    }
                    if (A[j]*A[l] > 1.5*n)
                    {
                        break;
                    }
                }
            }
        }
        cout << mn << "\n";
    }
}