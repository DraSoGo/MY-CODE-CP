#include <bits/stdc++.h>
using namespace std;
main()
{
    int sum;
    cin >> sum;
    if(sum >= 80 && sum <= 100)
    {
        cout << "4";
    }
    else if(sum >= 75 && sum <= 79)
    {
        cout << "3.5";
    }
    else if(sum >= 70 && sum <= 74)
    {
        cout << "3";
    }
    else if(sum >= 65 && sum <= 69)
    {
        cout << "2.5";
    }
    else if(sum >= 60 && sum <= 64)
    {
        cout << "2";
    }
    else if(sum >= 55 && sum <= 59)
    {
        cout << "1.5";
    }
    else if(sum >= 50 && sum <= 54)
    {
        cout << "1";
    }
    else if(sum >= 0 && sum <= 49)
    {
        cout << "0";
    }
}