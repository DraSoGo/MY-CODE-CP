#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int A[26];
    memset(A,0,sizeof(A));
    getline(cin,a);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            A[a[i] - 'A']++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            A[a[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (A[i] > 0)
        {
            cout << char('A'+i) << " = " << A[i] << "\n";
        }    
    }    
}   