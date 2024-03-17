#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b = 1000000007;
    cin >> a;
    cout << ((a % b)*(a % b))%b;
}