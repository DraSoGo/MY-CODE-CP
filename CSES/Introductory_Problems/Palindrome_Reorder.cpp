#include <bits/stdc++.h>
using namespace std;

int A[26],co,n,idx = -1;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string st;
    cin >> st;
    for (int i = 0; i < st.length(); i++)
    {
        if (A[st[i]-'A'] == 0)
        {
            n++;
        }
        A[st[i]-'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (A[i] % 2 == 1)
        {
            co++;
            idx = i;
        }
        if (co >= 2)
        {
            // cout << co << " " << n << "\n";
            cout << "NO SOLUTION";
            return 0;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (A[i] % 2 == 0 && A[i] != 0)
        {
            for (int j = 0; j < A[i]/2; j++)
            {
                // cout << j << "\n";
                cout << char(i+'A');
            }
        }
    }
    for (int i = 0; idx != -1 && i < A[idx]; i++)
    {
        cout << char(idx+'A');
    }
    for (int i = 25; i >= 0; i--)
    {
        if (A[i] % 2 == 0 && A[i] != 0)
        {
            for (int j = 0; j < A[i]/2; j++)
            {
                // cout << j << "\n";
                cout << char(i+'A');
            }
        }
    }
    return 0;
}