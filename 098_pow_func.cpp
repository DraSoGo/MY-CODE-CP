#include <bits/stdc++.h>
using namespace std;
int poow(int num,int c)
{
    int x = pow(num,c);
    return x;
}
int main()
{
    int a,b,d;
    cin >> a >> d;
    cout << poow(a,d);
    return 0;
}