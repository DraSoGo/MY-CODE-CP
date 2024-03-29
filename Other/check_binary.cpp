#include <bits/stdc++.h>
using namespace std;
int x,co = 0;
string st;
void gen_base(int n)
{
    if(n == x)
    {
        if (st.find("1111") != -1)
        {
            cout << st << "\n";
            co++;
        }
        
    }
    else
    {
        st = st + '0';
        gen_base(n+1);
        st.erase(st.length()-1,1);
        st = st + '1';
        gen_base(n+1);
        st.erase(st.length()-1,1);
    }
    
}
int main()
{
    cin >> x;
    gen_base(0);
    cout << co;
    return 0;
}