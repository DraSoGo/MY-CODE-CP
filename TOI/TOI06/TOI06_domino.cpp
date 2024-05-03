#include <bits/stdc++.h>
using namespace std;

void sol(int n,string s)
{
    if (n == 0)
    {
        cout << s << "E\n";
        return;
    }
    if (n-1 >= 0)
    {
        sol(n-1,s + "--\n");
    }
    if (n-2 >= 0)
    {
        sol(n-2,s + "||\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    sol(n,"");
    return 0;
}