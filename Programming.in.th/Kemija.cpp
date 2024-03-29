#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ch;
    string x;
    char y[5] = {'a','e','i','o','u'};
    getline(cin,x);
    //cout << x;
    for (int i = 0; i < x.length(); i++)
    {
        ch = 0;
        for (int j = 0; j < 5; j++)
        {
            //cout << x[i] << " " << y[j] << "\n";
            if (x[i] == y[j])
            {
                ch = 1;
                break;
            }
        }
        if (ch == 1 && (x[i+1] = 'p') && (x[i+2] == x[i]))
        {
            x[i+1] = '0';
            x[i+2] = '0';
        }
        if (x[i] != '0')
        {
            cout << x[i];
        }
        //cout << x[i];
    }
    
}