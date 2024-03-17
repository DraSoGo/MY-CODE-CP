#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (j == 0)
            {
                cout << "+";
            }
            else
            {
                cout << "*";
            }
            
        }

        cout << "\n";
    }
    
}