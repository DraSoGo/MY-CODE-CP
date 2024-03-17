#include <bits/stdc++.h>
using namespace std;
int text(string c,int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << c;
        cout << "\n";
    }
}
int main()
{
    string a;
    int b;
    cout << "Enter message : ";
    cin >> a;
    cout << "Enter Number : ";
    cin >> b;
    text(a,b);
    return 0;
}