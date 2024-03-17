#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,co = 0;
    cin >> a;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < a; i++)
    {
            if (A[i] == 1 && (A[i - 1] == 1 || A[i - 1] == 2 || A[i - 1] == 3))
            {
                A[i] = 0;
            }
            else if (A[i] == 3 && (A[i + 1] == 1 || A[i + 1] == 2 || A[i + 1] == 3))
            {
                A[i] = 0;
            }
            else if (A[i] == 2 && (A[i - 1] == 1 || A[i - 1] == 2 || A[i - 1] == 3
                    || A[i + 1] == 1 || A[i + 1] == 2 || A[i + 1] == 3))
            {
                A[i] = 0;
            }
    }
    for (int i = 0; i < a; i++)
    {
        if (A[i] == 1 && A[i - 1] != 1 && A[i - 1] != 2 && A[i - 1] != 3)
        {
            co++;
        }
        else if (A[i] == 3 && A[i + 1] != 1 && A[i + 1] != 2 && A[i + 1] != 3)
        {
            co++;
        }
        else if (A[i] == 2 && A[i - 1] != 1 && A[i - 1] != 2 && A[i - 1] != 3
                 && A[i + 1] != 1 && A[i + 1] != 2 && A[i + 1] != 3)
        {
            co++;
        }
    }
    // for (int i = 0; i < a; i++)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << "\n";
    cout << co;
    return 0;
}