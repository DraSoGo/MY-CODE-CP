#include <bits/stdc++.h>
using namespace std;
string st,a = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void gen(int y,int b,int n)
{
    if(y == n)
    {
        cout << st << "\n";
    }
    else
    {
        for (int i = 0; i < b; i++)
        {
            st = st + a[i];
            gen(y+1,b,n);
            st.erase(st.length()-1,1);
        }
    }
}
int main()
{
    int b,n;
    cin >> b >> n;
    gen(0,b,n);
    return 0;
}