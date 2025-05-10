#pragma GCC optimize ("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

int input()
{
    int n = 0,neg = 1;
    char c;
    c = getchar();
    if (c == '-')
    {
        neg = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        n *= 10;
        n += c - '0';
        c = getchar();
    }
    return n*neg;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    a = input();
    b = input();
    cout << a << "\n" << b;
    return 0;
}
/*
INPUT
47829
-47829
OUTPUT
47829
-47829
*/