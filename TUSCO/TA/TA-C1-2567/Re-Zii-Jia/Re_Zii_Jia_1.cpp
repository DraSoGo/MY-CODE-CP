#include <bits/stdc++.h>
using namespace std;

struct CM
{
    double dx, dy;
};

stack <CM> MV;
stack <CM> RMV;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    double n,a,b,x,y;
    string cm;
    cin >> n >> a >> b;
    double xa = a,yb = b;
    for (int i = 0; i < n; i++)
    {
        cin >> cm;
        if (cm == "MV")
        {
            cin >> x >> y;
            MV.push({x,y});
        }
        else if (cm == "RE")
        {
            if (MV.empty())
            {
                continue;
            }
            RMV.push(MV.top());
            MV.pop();
        }
        else
        {
            if (RMV.empty())
            {
                while (!MV.empty())
                {
                    MV.pop();
                }
            }
            else
            {
                MV.push(RMV.top());
                RMV.pop();
            }
        }
    }
    while (!MV.empty())
    {
        auto [x,y] = MV.top();
        xa += x;
        yb += y;
        MV.pop();
    }
    cout << fixed << setprecision(2) << sqrt(pow(a - xa,2)+pow(b - yb,2)) << "\n";
    cout << fixed << setprecision(0) << xa << " " << yb;
    return 0;
}
