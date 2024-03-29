#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int a;
    cin >> x;
    a = x[x.length()-1] - '0';
    if (a%2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}