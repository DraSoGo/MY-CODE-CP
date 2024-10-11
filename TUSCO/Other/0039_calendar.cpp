#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t = 1,c;
    cin >> a >> b;
    c = a;
    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j < 7;j++)
        {
            if (a != 1)
            {
                cout << "   ";
                a--;
            }
            else
            {
                if(t <= b)
                {
                    if (t > 0 && t <= 9)
                    {   if(c == 7)
                        {
                            if(t == 1 && t != 9)
                            {
                                cout << " " << t;
                                t++;
                            }
                            else if(i == 1 && j == 0 && t != 9)
                            {
                                cout << " " << t;
                                t++;
                            }
                            else if (t == 9)
                            {
                                cout << " " << t;
                                t++;
                            }
                            else
                            {
                                cout << "  " << t;
                                t++;
                            }
                        }
                        else
                        {
                            if(t == 1)
                            {
                                cout << " " << t;
                                t++;
                            }
                            else if(i == 1 && j == 0)
                            {
                                cout << " " << t;
                                t++;
                            }
                            else
                            {
                                cout << "  " << t;
                                t++;
                            }
                        }
                    }
                    else
                    {
                        if(t == 10 && c != 6)
                        {
                            cout << " " << t << " ";
                            t++;
                        }
                        else
                        {
                            cout << t << " ";
                            t++; 
                        }   
                    }
                }
            }
        }
        cout << "\n";
    }
    if(c == 7)
    {
        cout << 30;
    }
}