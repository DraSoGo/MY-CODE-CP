#include <bits/stdc++.h>
using namespace std;
const int NN = 1e7 + 5;
int arr[NN] = {};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, mm, k, l, prev, sum, m;
    cin >> n >> mm >> k >> l;
    while (n--)
    {
        cin >> a;
        arr[a + 1]++;
    }
    for (int i = 1; i < NN; i++)
    {
        arr[i] += arr[i - 1];
    }
    while (k--)
    {
        prev = 0, sum = 0;
        for (int i = 0; i < mm; i++)
        {
            cin >> m;
            m++;
            sum += (arr[min(m + l, NN - 1)] - arr[max(prev, m - l - 1)]);
            prev = min(m + l, NN - 1);
        }
        cout << sum << "\n";
    }
}