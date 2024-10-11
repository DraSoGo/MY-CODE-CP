#include <bits/stdc++.h>
using namespace std;
void think(char a,char b,char c,int n)
{
    if(n > 0)
    {
        think(a,c,b,n - 1);
        cout << "Move disk " << n << " from " << a << " to " << c << "\n";
        think(b,a,c,n - 1);
    }
}
int main()
{
    int a;
    cin >> a;
    think('A','B','C',a);
    return 0;
}