#include <bits/stdc++.h>
using namespace std;
main()
{
    int a;
    cin >> a;
    stack <int> num;
    for (int i = 0; i < a; i++)
    {
        int x,y,z;
        string d;
        cin >> d;
        if (d == "+")
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = x+y;
            num.push(z);
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else if (d == "-")
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = y-x;
            num.push(z);
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else if (d == "*")
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = x*y;
            num.push(z);
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else if (d == "/")
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
            int b = stoi(d);
            num.push(b);
        }
        // cout << num.top() << "\n------\n";
    }
    cout << num.top();
}