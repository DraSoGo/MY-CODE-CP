#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b;
    cin >> a >> b;
    b % a == 0?cout << b/a:cout << -1;
    return 0;
}
