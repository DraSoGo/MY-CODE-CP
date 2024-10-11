#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ch = 0;
        cin >> a;
        for (int j = 0; j < a.length()/2; j++)
        {
            if (a[j] != a[a.length() - j - 1])
            {
                ch = 1;
                break;
            }
        }
        if (ch == 1)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
        cout << "\n";
    }
}