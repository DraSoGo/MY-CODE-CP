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
        if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/' || a[i] == '^' || a[i] == '(' || a[i] == ')')
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
                if ((b2 == '+' && b1 == '-') || (b2 == '-' && b1 == '+') || (b2 == '*' && b1 == '/') || (b2 == '/' && b1 == '*') || ((b2 == '*' || b2 == '/') && (b1 == '+' || b1 == '-')) || (b2 == '^' && b1 != '(' && b1 != ')' ) || (b1 == b2 && b1 != '(' && b2 != ')'))
                {
                    STR.pop();
                    STR.pop();
                    POS.push(b2);
                    STR.push(b1);
                }
                else if (b1 == ')')
                {
                    STR.pop();
                    while (STR.top() != '(')
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
    while (!POS.empty())
    {
        cout << POS.front();
        POS.pop();
    }
    while (!STR.empty())
    {
        cout << STR.top();
        STR.pop();
    }
    
}