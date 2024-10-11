#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int ch = 0,a,b;
    cin >> a >> b;
    int X[a],Y[a];
    for (int i = 0; i < a; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> Y[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (X[i] + Y[j] > b)
            {
                ch++;
                Y[j] = -99999;
                break;
            }
            
        }
        
    }
    cout << ch;
}
