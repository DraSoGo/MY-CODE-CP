#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int A[1000];
    for (int i = 0; i < 1000; i++)
    {
        A[i] = (i+1)*(i+1);
    }
    int n,a,b;
    cin >> n;
    while (n--)
    {
        int co = 0;
        cin >> a >> b;
        for (int i = 0; i < 1000; i++)
        {
            if (A[i] >= a && A[i] <= b)
            {
                co++;
            }
        }
        cout << co << "\n";
    }
    return 0;
}