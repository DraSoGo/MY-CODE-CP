#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie();cout.tie();
    int n = 2,co = 0;
    vector <int> A;
    while (n >= 0 && n <= 9)
    {
        cin >> n;
        if (n < 0 || n > 9)
        {
            break;
        }
        
        // cout << n << "\n";
        A.push_back(n);
        co++;
    }
    for (int i = 0; i < co; i++)
    {
        for (int j = 0; j < co; j++)
        {
            if (i >= co-j-1)
            {
                cout << A[i];
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}