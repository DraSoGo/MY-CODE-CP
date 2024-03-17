#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> b;
    do
    {
        cin >> a;
        if (a > b)
        {
            cout << "Greter than\n";
        }
        else if (a < b)
        {
            cout << "Less than\n";
        }
        
    }
    while (a != b);
    cout << "Yes";
}