#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string BL) 
{
    stack<char> s;
    for (char c : BL) 
    {
        if (c == '(' || c == '{' || c == '[') 
        {
            s.push(c);
        } 
        else if (c == ')' || c == '}' || c == ']') 
        {
            if (s.empty()) 
            {
                return false;
            }
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') || 
                (c == '}' && top != '{') || 
                (c == ']' && top != '[')) 
                {
                return false;
                }
        }
    }
    return s.empty();
}

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        string BL;
        cin >> BL;
        if (isBalanced(BL)) 
        {
            cout << "Balanced\n";
        }
        else
        {
            cout << "Not Balanced\n";
        }
    }
    return 0;
}
