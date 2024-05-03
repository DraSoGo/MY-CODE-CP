#include <bits/stdc++.h>
using namespace std;
main()
{
    string a;
    char b1,b2;
    queue <char> POS;
    stack <char> STR;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '[' || a[i] == ']')
        {
            STR.push(a[i]);
            while (STR.size() > 1)
            {
                b1 = STR.top();
                STR.pop();
                b2  = STR.top();
                STR.pop();
                STR.push(b2);
                STR.push(b1);
                if ((b2 == '1' && (b1 == '1')) || (b2 == '2' && (b1 == '1' || b1 == '2')) || (b2 == '3' && (b1 == '1' || b1 == '2' || b1 == '3')))
                {
                    STR.pop();
                    STR.pop();
                    POS.push(b2);
                    STR.push(b1);
                }
                else if (b1 == ']')
                {
                    STR.pop();
                    while (STR.top() != '[')
                    {
                        POS.push(STR.top());
                        STR.pop();
                    }
                    STR.pop();
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            POS.push(a[i]);
        }
        
    }
    queue <char> QU;
    while (!POS.empty())
    {
        QU.push(POS.front());
        POS.pop();
    }
    while (!STR.empty())
    {
        QU.push(STR.top());
        STR.pop();
    }
    stack <int> num;
    while(!QU.empty())
    {
        int x,y,z;
        // cout << d[i] << "\n";
        if (QU.front() == '1')
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = x + y;
            z = z + floor(z * 4/100);
            num.push(z);
            QU.pop();
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else if (QU.front() == '2')
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = x + y;
            z = z + floor(z * 8/100);
            num.push(z);
            QU.pop();
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else if (QU.front() == '3')
        {
            x = num.top();
            num.pop();
            y = num.top();
            num.pop();
            z = x + y;
            z = z + floor(z * 16/100);
            num.push(z);
            QU.pop();
            // cout << "x = " << x << "\ny = " << y << "\n";
        }
        else
        {
            num.push(20);
            QU.pop();
        }
        // cout << num.top() << "\n------\n";
    }
    cout << num.top();
    
}