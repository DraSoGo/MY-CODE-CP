#include <bits/stdc++.h>
using namespace std;
int n;
string s;
queue<char> q, temp;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        q.push(s[i]);
    }
    temp = q;
    for (int i = 1; i <= n; i++)
    {
        temp.push(temp.front());
        temp.pop();
        if (n % i == 0 && temp == q)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}