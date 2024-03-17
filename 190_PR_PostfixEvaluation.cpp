#include <bits/stdc++.h>
using namespace std;
main()
{
    stack <int> num;
    string d;
    cin >> d;
    int l = d.length();
    for (int i = 0; i < l; i++)
    {
        int x,y,z;
        // cout << d[i] << "\n";
        if (d[i] == '+')
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = x+y;
            num.push(z);
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else if (d[i] == '-')
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = y-x;
            num.push(z);
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else if (d[i] == '*')
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = x*y;
            num.push(z);
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else if (d[i] == '/')
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = y/x;
            num.push(z);
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else
        {
            int b = d[i] - 48;
            num.push(b);
        }
        // cout << num.top() << "\n------\n";
    }
    cout << num.top();
}