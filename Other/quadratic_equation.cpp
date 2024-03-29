#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,x1,x2;
    cin >> a >> b >> c;
    x1 = ((-b) + sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
    x2 = ((-b) - sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
    cout << fixed << setprecision(2) << x1;
    cout << "\n";
    cout << fixed << setprecision(2) << x2;
}