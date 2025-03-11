#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int mem[1000000];
int co = 0;

int Dice(int n)
{
    co++;
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    if (mem[n])
    {
        return mem[n];
    }
    int sum = 0;
    for (int i = 1; i < 7; i++)
    {
        sum = (sum%MOD + (Dice(n-i)%MOD))%MOD;
    }
    mem[n] = sum;
    return sum;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    cout << Dice(n);
    return 0;
}