#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int re = 0,n,x,i = 0;
    stack <int> ST;
    string cm;
    cin >> n;
    string CM[n];
    int NUM[n];
    while (n--)
    {
        cin >> cm;
        if (cm == "PUSH")
        {
            cin >> x;
            CM[i] = "PUSH";
            NUM[i] = x;
        }
        else if (cm == "STORE")
        {
            CM[i] = "STORE";
        }
        else if (cm == "LOAD")
        {
            CM[i] = "LOAD";
        }
        else if (cm == "PLUS")
        {
            CM[i] = "PLUS";
        }
        else if (cm == "TIMES")
        {
            CM[i] = "TIMES";
        }
        else if (cm == "IFZERO")
        {
            cin >> x;
            CM[i] = "IFZERO";
            NUM[i] = x;
        }
        else if (cm == "DONE")
        {
            CM[i] = "DONE";
        }
        i++;
    }
    i = 0;
    // cout << "Hi";
    while (CM[i] != "DONE")
    {
        // cout << i << " " << CM[i] << " : " << re << " > ";
        // if (!ST.empty())
        // {
        //     cout << ST.top();
        // }
        // cout << "\n";
        if (CM[i] == "PUSH")
        {
            ST.push(NUM[i]);
        }
        else if (CM[i] == "STORE")
        {
            re = ST.top();
            ST.pop();
            // ST.pop();
            // if (!ST.empty())
            // {
            //     ST.pop();
            // }
        }
        else if (CM[i] == "LOAD")
        {
            ST.push(re);
        }
        else if (CM[i] == "PLUS")
        {
            int a,b;
            a = ST.top();
            ST.pop();
            b = ST.top();
            ST.pop();
            ST.push(a+b);
        }
        else if (CM[i] == "TIMES")
        {
            int a,b;
            a = ST.top();
            ST.pop();
            b = ST.top();
            ST.pop();
            ST.push(a*b);
        }
        else if (CM[i] == "IFZERO")
        {
            if (ST.top() == 0)
            {
                i = NUM[i] - 1;
            }
            ST.pop();
        }
        i++;
    }
    cout << ST.top();
    
    return 0;
}
