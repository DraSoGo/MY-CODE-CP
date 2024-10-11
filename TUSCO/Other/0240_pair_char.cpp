#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int A[26];
    memset(A,0,sizeof(A));
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = ('A'-'a') + a[i];
        }
    }
    for (int i = 0; i < a.length(); i++)
    {
        A[a[i]-'A'] = 1;
    }
    //cout << a;
    for (int i = 0; i < 26; i++)
    {
        for (int j = i+1; j < 26; j++)
        {
            if (A[i] == 1 && A[j] == 1)
            {
                cout << char(i+65) << char(j+65) << "\n";
            }
        }
    }
}