#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,a,b,ch = 0;
    cin >> n;
    int QS[n],A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (i == 0)
        {
            QS[0] = A[i];
        }
        else
        {
            QS[i] = QS[i-1]+A[i];
        }
    }
    for (int i = 1; i < n; i++)
    {
        a = QS[i-1];
        b = QS[n-1] - QS[i];
        //cout << a << " " << b << "\n";
        if (a == b)
        {
            ch = 1;
            break;
        }
    }
    if (ch == 1)
    {

        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}