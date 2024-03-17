#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum = 0,av,c = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    av = sum/n;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > av)
        {
            c = c+(A[i] - av);
        }
    }
    cout << c;
}