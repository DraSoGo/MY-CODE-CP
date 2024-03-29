#include <bits/stdc++.h>
using namespace std;
void even(int a,int b),odd(int a,int b);
void even(int a,int b)
{
    if (a <= b)
    {
        cout << a-1 << " ";
        a++;
        odd(a,b);
    }
    return;
}

void odd(int a,int b)
{
    if (a <= b)
    {
        cout << a+1 << " ";
        a++;
        even(a,b);
    }
    return;
}

int main()
{
    int a,b;
    cin >> a >> b;
    odd(a,b);
}
