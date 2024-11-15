#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie();cout.tie();
    int n,idx;
    cout << "Enter number of student: ";
    cin >> n;
    string ANS[n+1];
    cout << "Enter student names: \n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        cin >> ANS[i];
    }
    cout << "Enter number of rotations: ";
    cin >> idx;
    cout << "Initial Line: ";
    for (int i = 1; i <= n; i++)
    {
        cout << ANS[i] << " ";
    }
    cout << "\n";
    cout << "After " << idx << " rotations: ";
    // idx++;
    // idx %= n;
    // idx = n % idx;
    idx = n-idx+1;
    // cout << idx << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ANS[idx] << " ";
        idx++;
        if (idx >= n+1)
        {
            idx = 1;
        }
    }
    return 0;
}