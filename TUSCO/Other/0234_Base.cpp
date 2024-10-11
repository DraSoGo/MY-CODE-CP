#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,base;
    string st,code = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> num >> base;
    while (num > 0)
    {
        st += code[num % base];
        num /= base;
    }
    cout << st;
    return 0;
}