#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,co = 0,idx = 3;
    int A[4] = {1,2,5,10};
    cin >> n;
    while (n > 0)
    {
        n -= A[idx];
        co++;
        if (n < 0)
        {
            co--;
            n += A[idx];
            idx--;
        }
        // cout << n << " " << co << "\n";
    }
    cout << co;
    return 0;
}