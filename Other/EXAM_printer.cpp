#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <string> A;
    string w;
    char c;
    auto m = A.begin();
    int n,a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'i')
        {
            cin >> w;
            A.insert(m,w);
            //m++;
        }
        else if(c == 'l')
        {
            if (m != A.begin())
            {
                m--;
            }
        }
        else if(c == 'r')
        {
            if (m != A.end())
            {
                m++;    
            }
        }
        else if(c == 'b')
        {
            if (m != A.begin())
            {
                m = A.erase(--m);
            }
        }
        else if(c == 'd')
        {
            if (m != A.end())
            {
                m = A.erase(m);
            }
        }
        //cout << m << "\n";
    }
    for (auto i:A)
    {
        cout << i << " ";
    }
}