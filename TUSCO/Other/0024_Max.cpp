#include <bits/stdc++.h>
using namespace std;
main(){
    int a,b,c,e,d = -999999;
    cin >> a >> b >> c >> e;
    if(a > d)
    {
        d = a;
    }
    if(b > d)
    {
        d = b;
    }
    if(c > d)
    {
        d = c;
    }
    if(e > d)
    {
        d = e;
    }
    cout << "Largest number is = " << d;
}