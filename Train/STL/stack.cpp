#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> ST;
    ST.push(1);
    ST.push(2);
    cout << ST.top() << "\n";
    ST.pop();
    cout << ST.top() << "\n";
    cout << ST.size() << "\n";
    if (!ST.empty())
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    
    return 0;
}