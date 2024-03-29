#include <iostream>
using namespace std;
int main()
{
    int n,y,hs,ms,he,me,ts,te,t,th,tm;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> y >> hs >> ms >> he >> me;
        ts = (hs*60) + ms;
        te = (he*60) + me;
        t = 24*60 - ts + te;
        th = t/60;
        tm = t-(th*60);
        cout << th << " " << tm << "\n";
        if (y >= 6 && y <= 13)
        {
            if(t < (9*60))
            {
                cout << "Sleep more\n";
                int x = te + (24 * 60) - (9 * 60);
                cout << x/60 << " " << x%60 << "\n";
            }
            else if(t >= 9*60 && t <= 11*60)
            {
                cout << "Sleep Well\n";
            }
            else
            {
                cout << "Sleep too much\n";
            }
        }
        if (y >= 14 && y <= 17)
        {
            if(t < (9*60))
            {
                cout << "Sleep more\n";
                int x = te + (24 * 60) - (9 * 60);
                cout << x/60 << " " << x%60 << "\n";
            }
            else if(t >= 9*60 && t <= 10*60)
            {
                cout << "Sleep Well\n";
            }
            else
            {
                cout << "Sleep too much\n";
            }
        }
        if (y >= 18 && y <= 64)
        {
            if(t < 7*60)
            {
                cout << "Sleep more\n";
                int x = te + (24 * 60) - (7 * 60);
                cout << x/60 << " " << x%60 << "\n";
            }
            else if(t >= 7*60 && t <= (9*60))
            {
                cout << "Sleep Well\n";
            }
            else
            {
                cout << "Sleep too much\n";
            }
        }
        if (y >= 65)
        {
            if(t < 7*60)
            {
                cout << "Sleep more\n";
                int x = te + (24 * 60) - (7 * 60);
                cout << x/60 << " " << x%60 << "\n";
            }
            else if(t >= 7*60 && t <= 8*60)
            {
                cout << "Sleep Well\n";
            }
            else
            {
                cout << "Sleep too much\n";
            }
        }
    }
}