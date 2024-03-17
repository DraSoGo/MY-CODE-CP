#include <bits/stdc++.h>
using namespace std;
float a;
float circle(float r,float pi)
{
    a = pi*r*r;
    return a;
}
int main()
{
    float r,pi = 3.14159;
    //cout << "Enter circle radius : ";
    cin >> r;
    cout << "The area of circle = " << fixed << setprecision(2) << circle(r,pi);
}