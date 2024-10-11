#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a <= 55)
    {
        cout << "Depression";
    }
    else if (a <= 103)
    {
        cout << "Tropical Storm";
    }
    else if (a <= 134)
    {
        cout << "Category 1 hurricane";
    }
    else if (a <= 155)
    {
        cout << "Category 2 hurricane";
    }
    else if (a <= 182)
    {
        cout << "Category 3 hurricane";
    }
    else if (a <= 219)
    {
        cout << "Category 4 hurricane";
    }
    else
    {
        cout << "Category 5 hurricane";
    }

    
}