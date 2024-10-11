#include <bits/stdc++.h>
using namespace std;
void hanoi(char a,char b,char c,int n)
{
    if (n > 0)
    {
        hanoi(a,b,c,n-1);
        cout << "move " << n << " " << a << " to " << c << "\n"; 
        hanoi(b,a,c,n-1);
    }
}
int main()
{
    char a,b,c;
    int n;
    cin >> a >> b >> c >> n;
    hanoi(a,b,c,n);
    return 0;
}