#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,y,z,u,a1 = 0,a2 = 0;
    string x;
    cin >> n;
    stack <int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == "+")
        {
            a1 = s.top();
            s.pop();
            a2 = s.top();
            s.pop();
            y = (a2) + (a1);
            s.push(y);
        }
        else if (x == "*")
        {
            a1 = s.top();
            s.pop();
            a2 = s.top();
            s.pop();
            y = (a2) * (a1);
            s.push(y);
        }
        else if (x == "-")
        {
            a1 = s.top();
            s.pop();
            a2 = s.top();
            s.pop();
            y = (a2) - (a1);
            s.push(y);
        }
        else if (x == "/")
        {
            a1 = s.top();
            s.pop();
            a2 = s.top();
            s.pop();
            y = (a2) / (a1);
            s.push(y);
        }
        else
        {
            z = 0,u = 0;
            int k = x.length()-1;
            while (x.length() > 0)
            {
                z += pow(10,u)*(x[k] - '0');
                x.erase(k,1);
                u++;
                k--;
            }
            s.push(z);
        }
            
        //cout << a2 << " " << a1 << " " << y << "\n";
    }
    cout << y;
}