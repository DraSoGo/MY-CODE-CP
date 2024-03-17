#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int pls(int a)
{
    int x = 0;
    for (int i = 1; i <= a; i++)
    {
        sum += x;
        cout << x ;
        if (i == a)
        {
            cout << " = ";
        }
        else
        {
            cout << "+";
        }
        
        x += 2;
    }
    return sum;
    
}
int main()
{
    int a;
    cin >> a;
    sum = pls(a);
    cout << sum;
}