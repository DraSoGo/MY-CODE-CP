#include <bits/stdc++.h>
using namespace std;
main(){
    float p1,p2,p3,n1,n2,n3,a,b,c,d;
    cin >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
    d = n1 + n2 + n3;
    cout << d << "\n";
    a = (n1*p1) + (n2*p2) + (n3*p3);
    cout << fixed << setprecision(2) << a << "\n" ;
    b = a * 7/100;
    cout<< fixed << setprecision(2) << b <<"\n";
    c  = a - b;
    cout<< fixed << setprecision(2) << c;
}