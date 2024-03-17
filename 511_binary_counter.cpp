#include <bits/stdc++.h>
using namespace std;
string st;
void B(int a)
{
    if(st.length() == a)
    {
        cout << st << "\n";
    }
    else
    {
        st += '0';
        B(a);
        st.erase(st.length()-1,1);
        st += '1';
        B(a);
        st.erase(st.length()-1,1);
    }
    
}

int main()
{
    int a;
    cin >> a;
    B(a);
}