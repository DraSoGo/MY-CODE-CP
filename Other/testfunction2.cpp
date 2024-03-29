#include <bits/stdc++.h>
using namespace std;
void year(float p,int r,int y)
{
    for (int i = 1; i <= y; i++)
    {
        p += (p*r)/100;
        cout << "Year " << i << " --> " << fixed << setprecision(2) << p << "\n";
    }
    
}
int main()
{
    float p,r;
    int y;
    cin >> p >> r >> y;
    year(p,r,y);
}