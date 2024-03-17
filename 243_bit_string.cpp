#include <bits/stdc++.h>
using namespace std;
int n,co = 0;
string st;
void think(int deep)
{
    if (deep == n)
    {
        if (st.find("00000") != -1 || st.find("11111") != -1)
        {
            co ++;
        }
        
        cout << co << " " << st << "\n";
    }
    else
    {
        st = st + '0';
        think(deep + 1);
        st.erase(st.length() - 1,1);
        st = st + '1';
        think(deep + 1);
        st.erase(st.length() - 1,1);
    }
    
}
int main()
{
    cin >> n;
    think(0);
    return 0;
}