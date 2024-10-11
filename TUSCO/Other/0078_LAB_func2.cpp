#include <bits/stdc++.h>
using namespace std;
int year(float p,float r,float y)
{
    for (int i = 1; i <= y; i++)
    {
        p = p * ((100.0 + r)/100.0);
        cout << "Year " << i << " --> ";
        cout << fixed << setprecision(2) << p << "\n";
    }
}
int main()
{
    float a,b,c;
    cout << "Number of people : ";
    cin >> a;
    cout << "Increase rate : ";
    cin >> b;
    cout << "Number of year : ";
    cin >> c;
    year(a,b,c);
}