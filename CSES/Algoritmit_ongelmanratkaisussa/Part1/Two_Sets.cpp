#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,sumA = 0,sumB = 0;
    cin >> n;
    vector <long long> A,B;
    for (int i = n; i >= 1; i--)
    {
        if (sumA <= sumB)
        {
            A.push_back(i);
            sumA += i;
        }
        else
        {
            B.push_back(i);
            sumB += i;
        }
    }
    if (sumB != sumA)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES\n" << A.size() << "\n";
    for (auto i:A)
    {
        cout << i << " ";
    }
    cout << "\n" << B.size() << "\n";
    for (auto i:B)
    {
        cout << i << " ";
    }
    
    return 0;
}