#include <bits/stdc++.h>
using namespace std;
struct A
{
    float git;
    float grade;
}a;

int main()
{
    int n;
    float sum = 0,x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a.git >> a.grade;
        sum += a.git * a.grade;
        x += a.git;
    }
    cout << fixed << setprecision(2) << sum/x;
}