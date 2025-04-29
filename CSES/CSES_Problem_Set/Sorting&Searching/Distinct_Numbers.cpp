#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,co = 0,x;
    cin >> n;
    set <int> A;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A.insert(x);
    }
    cout << A.size();
    return 0;
}