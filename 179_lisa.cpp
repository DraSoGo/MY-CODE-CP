#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long X;
    cin >> X;
    int ch = 0;
    for (long long i = 1; i * i < X; i++) 
    {
        ch++;
    }
    cout << ch << "\n";
    return 0;
}