#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned  long n,A[4],B[4],x = 1000000007,sum = 0;
    cin >> n;
    for (int i = 0; i < 4; i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j < 4; j++)
            {
                A[j] += A[j-1];
                if (A[j] > x)
                {
                    sum = (sum + (A[j] - B[j]))%x;
                    A[j] = B[j];
                }
            }
        }
        else
        {
            for (int j = 2; j >= 0; j--)
            {
                A[j] += A[j+1];
                if (A[j] > x)
                {
                    sum = (sum + (A[j] - B[j]))%x;
                    A[j] = B[j];
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n" << sum << "\n";
}