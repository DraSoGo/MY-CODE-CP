#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    int n,c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a != 12.01)
        {
            c++;
        }
        
    }
    cout << c;
}