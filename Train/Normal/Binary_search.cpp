#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,l = 0,r = 100,mid,co = 0;
    cin >> n;
    while (l <= r)
    {
        mid = (l+r)/2;
        if (mid == n)
        {
            cout << co;
            break;
        }
        else if (mid > n)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        co++;
    }
    return 0;
}
/*
INPUT
10
OUTPUT
6
*/