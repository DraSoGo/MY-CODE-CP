#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b,c = 0;
    cin >> a >> b;
    string x,y;
    cin >> x;
    for (int i = 0; i < b - 1; i++)
    {
        int ch = 0;
        cin >> y;
        if (c == 0)
        {
            for (int j = 0; j < a; j++)
            {
                if (x[j] != y[j])
                {
                    ch++;
                }
                if (ch > 2)
                {
                    c = 1;
                    break;
                }
                
            }
            if (c == 0)
            {
                x = y;
            }
        }
    }
    cout << x;
}