#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,tms = 0,tme = 0,time;
    double ts,te;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ts >> te;
        tms = (int(ts)*60) + (int(ts*100)%100);
        tme = (int(te)*60) + (int(te*100)%100);
        if (tms > tme)
        {
            time = 1440 - tms + tme;
        }
        else
        {
            time = tme - tms;
        }
        printf("%d:%02d\n",time/60,time%60);
    }
}