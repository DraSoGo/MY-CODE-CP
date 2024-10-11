#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,y;
    stack <int> S;
    string x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == "+")
        {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a+b);
        }
        else if (x == "*")
        {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a*b);
        }
        else if (x == "-")
        {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(b-a);
        }
        else if (x == "/")
        {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(b/a);
        }
        else
        {
            y = 0;
            for (int i = 0; i < x.length(); i++)
            {
                y += (x[i] - '0') * pow(10,x.length()-i-1);
            }
            S.push(y);
        }
    }
    cout << S.top();
}