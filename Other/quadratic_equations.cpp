#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    cout << "x = " << fixed << setprecision(2) << ((-1*b)+sqrt(pow(b,2)-(4*a*c)))/(2*a) << "\n";
    cout << "x = " << fixed << setprecision(2) << ((-1*b)-sqrt(pow(b,2)-(4*a*c)))/(2*a) << "\n";
}