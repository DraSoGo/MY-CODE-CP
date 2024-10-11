#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,timestart,timeout = 1245,time;
    cin >> a >> b;
    timestart = 60*a + b;
    time = timeout - timestart;
    if (time > 0)
    {
      cout << time << " " << ceil(time/2);
    }
    else
    {
      cout << 0 << " " << 0;
    }
}