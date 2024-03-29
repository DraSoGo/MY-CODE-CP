#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c = 0;
    cin >> n;
    double A[n],B[n-1],x;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i < n; i++)
    {
        x = A[i] - A[i-1];
        B[i-1] = x;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (B[i] > 0 && B[i+1] < 0)
        {
            c++;
        }
    }
    cout << c;
}