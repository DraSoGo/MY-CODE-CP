#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,a;
    long long x,y = pow(10,9)+7;
    vector <long long> A;
    A.push_back(1);
    cin >> a;
    for (int i = 1; i < 1000000; i++)
    {
        A.push_back((A[i - 1] * 2) % y);
    }
    while (a--)
    {
        cin >> n;
        cout << A[n] << "\n";
    }    
}