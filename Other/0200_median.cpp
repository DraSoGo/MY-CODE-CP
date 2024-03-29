#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ch = 0;
    double a,sum = 0;
    cin >> n;
    double N[n];
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    sort(N,N+n);
    if (n % 2 == 0)
    {
        sum += N[n/2];
        sum += N[(n/2) - 1];
        sum /= 2;
    }
    else
    {
        sum += N[n/2];
    }
    cout << fixed << setprecision(1) << sum;
}