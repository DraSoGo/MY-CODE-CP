#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        sum += (a[i] - '0') * (13 - i);
    }
    cout << sum << "\n";
    sum = sum%11;
    cout << a;
    if (sum <= 1)
    {
        cout << 1-sum;
    }
    else
    {
        cout << 11-sum;
    }
}