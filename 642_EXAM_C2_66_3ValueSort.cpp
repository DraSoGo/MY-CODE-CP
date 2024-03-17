#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,one = 0,two = 0,co = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] == 1)
        {
            one++;
        }
        else if(A[i] == 2)
        {
            two++;
        }
    }
    two += one;
    for (int i = n-1; i >= one; i--)
    {
        bool ch = 1;
        if (A[i] == 1)
        {
            if (i < two)
            {
                for (int j = 0; j < one && ch == 1; j++)
                {
                    if (A[j] == 2)
                    {
                        swap(A[j],A[i]);
                        ch = 0;
                        co++;
                    }
                }
            }
            for (int j = 0; j < one && ch == 1; j++)
            {
                if (A[j] == 3)
                {
                    swap(A[j],A[i]);
                    ch = 0;
                    co++;
                }
            }
            for (int j = 0; j < one && ch == 1; j++)
            {
                if (A[j] == 2)
                {
                    swap(A[j],A[i]);
                    ch = 0;
                    co++;
                }
            }
        }
    }
    for (int i = two; i < n; i++)
    {
        bool ch = 1;
        if (A[i] != 3)
        {
            for (int j = one; j < two && ch == 1; j++)
            {
                if (A[j] == 3)
                {
                    swap(A[j],A[i]);
                    ch = 0;
                    co++;
                }
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << A[i] << " ";
    // }
    // cout << "\n";
    cout << co;
}