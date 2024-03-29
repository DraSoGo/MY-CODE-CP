#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <string> ac;
    queue <string> wd;
    int n,m,acs,wds,ch = 0;
    string a,b,x,y,z;
    cin >> m >> n;
    for(int i = 0;i < m;i++)
    {
        cin >> a;
        ac.push(a);
    }
    for(int i = 0;i < n;i++)
    {
        cin >> b;
        wd.push(b);
    }
    int A[3];
    for(int i = 0;i < 3;i++)
    {
        A[i] = 0;
    }
    while(ch == 0)
    {
        if(A[0] <= 0)
        {
            if(!ac.empty())
            {
                A[0] = 3;
                x = ac.front() + "(acc)";
                ac.pop();
            }
            else if(!wd.empty())
            {
                A[0] = 1;
                x = wd.front() + "(w/d)";
                wd.pop();
            }
        }
        if (A[1] <= 0)
        {
            if(wd.size() >= 2*ac.size() && !wd.empty())
            {
                A[1] = 1;
                y = wd.front() + "(w/d)";
                wd.pop();
            }
            else if(!ac.empty())
            {
                A[1] = 3;
                y = ac.front() + "(acc)";
                ac.pop();
            }
        }
        if (A[2] <= 0)
        {
            if(wd.size() >= 2*ac.size() && !wd.empty())
            {
                A[2] = 1;
                z = wd.front() + "(w/d)";
                wd.pop();
            }
            else if(!ac.empty())
            {
                A[2] = 3;
                z = ac.front() + "(acc)";
                ac.pop();
            }
        }
        A[0]--;
        if(A[0] == 0)
        {
            cout << x << " ";
        }
        else
        {
            cout << "-(-) ";
        }
        A[1]--;
        if(A[1] == 0)
        {
            cout << y << " ";
        }
        else
        {
            cout << "-(-) ";
        }
        A[2]--;
        if(A[2] == 0)
        {
            cout << z << "\n";
        }
        else
        {
            cout << "-(-) " << "\n";
        }
        if (A[0] <= 0 && A[1] <= 0 && A[2] <= 0 && wd.empty() && ac.empty())
        {
            ch = 1;
        }
    }
    cout << "-(-) -(-) -(-) ";
}
