#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hs,ms,hg,mg,tg,ts;
    cin >> hs >> ms >> hg >> mg;
    ts = (hs*60)+ms;
    tg = (hg*60)+mg;
    int t = ts - tg;
    if (t <= 30 && t >= 0)
    {
        cout << "On time";
    }
    else if (t < 0)
    {
        cout << "Late";
    }
    else if (t > 30)
    {
        cout << "Early";
    }
    cout << "\n";
    if (t != 0)
    {
        if (t < 0)
        {
            t = abs(t);
            if (t >= 60)
            {
                cout << int(t/60) << ":";
                if (t % 60 < 10)
                {
                    cout << 0;
                }
                cout << t % 60 << " hours after the start";
            }
            else
            {
                cout << t << " minutes after the start";
            }
        }
        else if (t > 0)
        {
            if (t >= 60)
            {
                cout << int(t/60) << ":";
                if (t % 60 < 10)
                {
                    cout << 0;
                }
                cout << t % 60 << " hours before the start";
            }
            else
            {
                cout << t << " minutes before the start";
            }
        }
    }
    
    
}