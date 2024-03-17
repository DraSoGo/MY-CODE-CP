#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0;
    string n;
    getline(cin,n);
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == ' ' || i == n.length()-1)
        {
            for (int j = i; j >= a; j--)
            {
                if (n[j] != ' ')
                {
                    cout << n[j];
                }
                
            }
            cout << " ";
            a = i;
        }
    }
}