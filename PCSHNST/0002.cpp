#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie();cout.tie();
    int n,x;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << fixed << setprecision(6) << sum/n;
    return 0;
}