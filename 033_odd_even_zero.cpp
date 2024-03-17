#include <bits/stdc++.h>
using namespace std;
main(){
    int a;
    cin >> a;
    if(a%2 == 0 && a != 0)
    {
        cout << a << " is an EVEN number.";
    }
    else if(a%2 == 1 || a%2 == -1)
    {
        cout << a << " is an ODD number.";
    }
    else if(a == 0)
    {
        cout << a << " is a ZERO number.";
    }
}