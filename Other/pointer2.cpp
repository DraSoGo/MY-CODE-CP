#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,x = 0;
    char *c;
    string b;
    getline(cin,b);
    c = &b[0];
    while (*c != '\0')
    {
        x++;
        c++;
    }
    cout << x;
}