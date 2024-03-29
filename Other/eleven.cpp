#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       cin >> a;
        long long b = 0;
       for (int j = 0; j < a.length(); j++)
       {
            if (j % 2 == 0)
            {
                b = b + (a[j] - '0');
            }
            else
            {
                b = b - (a[j] - '0');
            }
       }
       if (b % 11 == 0)
       {
            cout << "Yes";
       }
       else
       {
            cout << "No";
       }
       cout << "\n";
        
    }

}