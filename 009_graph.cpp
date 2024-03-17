#include <bits/stdc++.h>
using namespace std;
int n = 54;
int type;
int m, c, h, k;
float a, r;
int chky(float x)
{
    for (int y = n; y > -n; y--)
    {
        if (type == 1)
        {
            if (a * pow(x + h, 2) + c < 0)
            {
                if (floor(abs((a * pow(x + h, 2)) + c)) == y || ceil(abs((a * pow(x + h, 2)) + c)) == y)
                {
                    return -y;
                }
            }
            if (floor((a * pow(x + h, 2)) + c) == y || ceil((a * pow(x + h, 2)) + c) == y)
            {
                return y;
            }
        }
        else if (type == 2)
        {
            if (floor(y == a * pow(1 + r, x)) || ceil(y == a * pow(1 + r, x)))
            {
                return y;
            }
        }
        else if (type == 3)
        {
            if (pow(x - h, 2) + pow(y - k, 2) <= pow(r, 2))
            {
                return y;
            }
        }
        else if (type == 4)
        {
            if ((x * m) + c == y)
            {
                return y;
            }
        }
    }
}
int main()
{

    cout << "1.parabola 2.exponential 3.circle 4.straight line\npls select 1-4 :";
    cin >> type;

    if (type == 1)
    {
        cout << "y= a(x-h)^2 + c\npls insert a,h,c :";
        cin >> a >> h >> c;
    }
    else if (type == 2)
    {
        cout << "y= a(1+r)^x\npls insert a,r :";
        cin >> a >> r;
    }
    else if (type == 3)
    {
        cout << "(x-h)^2 + (y-k)^2 <= r^2\npls insert h,k,r :";
        cin >> h >> k >> r;
    }
    else if (type == 4)
    {

        cout << "y= mx + c\npls insert m,c :";
        cin >> m >> c;
    }
    else
    {
        cout << "error";
        return 0;
    }
    for (float i = n; i > -n; i--)
    {
        for (float j = -n; j < n; j++)
        {
            if (type == 1)
            {
                if (j < 0)
                {
                    if ((a * pow(j + h, 2)) + c == i || chky(j - 0.5) == i)
                    {
                        cout << "*";
                        continue;
                    }
                }
                else if (j > 0)
                {
                    if ((a * pow(j + h, 2)) + c == i || chky(j + 0.5) == i)
                    {
                        cout << "*";
                        continue;
                    }
                }
            }
            else if (type == 2)
            {
                if (i == a * pow(1 + r, j) || chky(j + 0.5) == i)
                {
                    cout << "*";
                    continue;
                }
            }
            else if (type == 3)
            {
                if (pow(j - h, 2) + pow(i - k, 2) <= pow(r, 2))
                {
                    cout << "*";
                    continue;
                }
            }
            else if (type == 4)
            {
                if ((j * m) + c == i)
                {
                    cout << "*";
                    continue;
                }
            }
            if (i == 0)
            {
                cout << "-";
                continue;
            }
            else if (j == 0)
            {
                cout << "|";
                continue;
            }
            cout << " ";
        }
        cout << '\n';
    }
}