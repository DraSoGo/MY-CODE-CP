#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x = 0,y = 0,C = 0;
    string a;
    while (a[0] != '*')
    {
        C = 0;
        cin >> a;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i]>='0' && a[i]<='9')
            {
                C *= 10;
                C += a[i]-'0';
            }
            else
            {
                if(a[i]=='N'&&a[i+1]=='\0')
                {
                    y+=C;
                }
                else if(a[i]=='N'&&a[i+1]=='E')
                {
                    x+= sqrt((C*C)/2);
                    y+= sqrt((C*C)/2);
                }
                else if(a[i]=='E'&&a[i+1]=='\0')
                {
                    x+=C;
                }
                else if(a[i]=='S'&&a[i+1]=='E')
                {
                    x+= sqrt((C*C)/2);
                    y-= sqrt((C*C)/2);
                }
                else if(a[i]=='S'&&a[i+1]=='\0')
                {
                    y-=C;
                }
                else if(a[i]=='S'&&a[i+1]=='W')
                {
                    x-= sqrt((C*C)/2);
                    y-= sqrt((C*C)/2);
                }
                else if(a[i]=='W'&&a[i+1]=='\0')
                {
                    x-=C;
                }
                else if(a[i]=='N'&&a[i+1]=='W')
                {
                    x-= sqrt((C*C)/2);
                    y+= sqrt((C*C)/2);
                }
                break;
            }
        }
    }
    double D=sqrt((x*x)+(y*y));
    printf("%.3f %.3f\n",x,y);
    printf("%.3f",D);
    return 0;
}