#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,x = 1;
    char b;
    cin >> b >> a;
    for (int i = -a; i <= a; i++)
    {
        for (int j = -a; j <= a; j++)
        {
            if (abs(i) == abs(j) || j == 0 || i == 0)
            {
                cout << "+";
            }
            else if (j > 0 - x  && j < 0 + x && i < 0)
            {
                cout << b;
            }
            else if (j >= -a + i  && j <= a - i && i > 0)
            {
                cout << b;
            }
            else
            {
                cout << ".";
            }
        }
        cout << "\n";
        x++;
    }    
}