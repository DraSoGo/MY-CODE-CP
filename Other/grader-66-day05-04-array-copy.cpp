#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0,n;
    cin >> n;
    int N[n];
    for (int i = 0; i < n; i++)
    {

        cin >> N[i];
        sum += N[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << N[i]+2 << " ";
    }
}
