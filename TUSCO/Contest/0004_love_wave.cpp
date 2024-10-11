#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    string lv;
    for (int i = 0; i < n; i++)
    {
        cin >> lv;
        stack <char> LOVE;
        int l = lv.length(),I = 0,U = 0;
        for (int i = 0; i < l; i++)
        {
            LOVE.push(lv[i]);
            if (LOVE.top() == 'I')
            {
                I++;                
            }
            else if (LOVE.top() == 'U')
            {
                U++;
                I--;
                if (I < 0)
                {
                    break;
                }
                
            }
            
        }
        if (I == 0)
        {
            cout << "Y" << "\n";
        }
        else
        {
            cout << "N" << "\n";
        }
    }
}