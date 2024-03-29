#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,c,sum = 0;
    string str;
    char b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        sum = sum + (b - '0');
    }
    sum = sum % 26;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            while (str[j] + sum > 90)
            {
                str[j] = str[j] - 26;
            }
            cout << (char)(str[j] + sum);
        }
        cout << "\n";
    }
    return 0;
}