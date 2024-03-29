#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a, b;
    cin >> a;
    unsigned long long c = 1;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        c = c * b;
    }
    cout << c << "\n";
    return 0;
}