#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int x = 1,A = 1;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'i')
        {
            A += x;
        }
        if (a[i] == ')')
        {
            x = A;
        }
    }
    cout << A;
}