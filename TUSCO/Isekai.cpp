#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum = 0,b = 0,ch;
    cin >> a;
    int A[a],c = a - 1;
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
        sum = sum + A[i];
    }
    cout << sum << "\n";
    for (int i = 0; i < a - 1; i++)
    {
        if (A[b] >= A[c])
        {
            sum = sum - A[b];
            cout << sum << "\n";
            ch = 0;
            b++;
        }
        else if (A[b] < A[c])
        {
            sum = sum - A[c];
            cout << sum << "\n";
            ch = 1;
            c--;
        }
        
    }
    if (ch == 1)
    {
        cout << c + 1;
    }
    else
    {
        cout << b + 1;
    }

    return 0;
}