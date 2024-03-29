#include <bits/stdc++.h>
using namespace std;
int sum(int x,int y,int z)
{
    int s = x + y + z;
    return s;
}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << sum(a,b,c);
}
