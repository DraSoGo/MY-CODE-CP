#include <bits/stdc++.h>
using namespace std;
main()
{
    string a,c;
    int b[9],sum = 0,x = 10;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        b[i] = a[i] - '0';
    }
    sum = 10*b[0]+9*b[1]+8*b[2]+7*b[3]+6*b[4]+5*b[5]+4*b[6]+3*b[7]+2*b[8]+1*b[9];
    for (int i = 1; i < 10; i++)
    {
        if ((sum + i) % 11 == 0)
        {
            c = i + '0';
        }
        
    }
    cout << a + c;
    
    
}