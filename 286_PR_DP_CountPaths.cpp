#include <bits/stdc++.h>
using namespace std;
int numberOfPaths(int m, int n)
{
    int path = 1;
    for (int i = n; i < (m + n - 1); i++) {
        path *= i;
        path /= (i - n + 1);
    }
    return path;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;
        cout << numberOfPaths(x, y) << "\n";
    }
    return 0;
}