#include <bits/stdc++.h>
using namespace std;
main(){
    char c;
    cin >> c;
    int a = (int)c;
    if( (a >= 65 && a <= 90) || (a >= 97 && a <= 122) )
    {
        cout << "is alphabet";
    }
    else
    {
        cout << "is not alphabet";
    }
}