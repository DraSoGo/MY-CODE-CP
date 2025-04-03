#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long sumA = 0,sumB = 0,n;
    vector <long long> A,B;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        if (sumA <= sumB)
        {
            sumA += i;
            A.push_back(i);
        }
        else
        {
            sumB += i;
            B.push_back(i);
        }
    }
    // cout << A.size() << "\n";
    // for (int i = A.size()-1; i >= 0; i++)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << "\n";
    // cout << B.size() << "\n";
    // for (int i = B.size()-1; i >= 0; i++)
    // {
    //     cout << B[i] << " ";
    // }
    // cout << "\n";
    if (sumA != sumB)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    cout << A.size() << "\n";
    for (int i = A.size()-1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    cout << B.size() << "\n";
    for (int i = B.size()-1; i >= 0; i--)
    {
        cout << B[i] << " ";
    }
    cout << "\n";
    return 0;
}