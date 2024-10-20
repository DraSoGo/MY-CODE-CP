#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    char x;
    queue <char> Q,pat;
    while (n--)
    {
        cin >> x;
        Q.push(x);
        pat.push(x);
    }
    for (int i = 1; i <= Q.size(); i++)
    {
        pat.push(pat.front());
        pat.pop();
        if (Q.size() % i == 0 && pat == Q)
        {
            cout << i;
            break;
        }
    }
    return 0;
}