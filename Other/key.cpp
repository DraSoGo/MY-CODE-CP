#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,k;
    cin >> a >> b >> k;
    char A[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < a.length(); j++)
        {
            if(a[j] > A[i])
            {
                A[i] = b[j];
            }
        }
    }
    for (int i = 0; i < k.length(); i++)
    {
        cout << A[k[i] - 'A'];
    }
}