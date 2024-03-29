#include <bits/stdc++.h>
using namespace std;
main()
{
    string a;
    float b,c,d;
    cout << "Enter name : ";
    cin >> a;
    cout << "Enter score : ";
    cin >> b >> c >> d;
    cout << "Name : " << a << "\n";
    cout << "Average score : ";
    cout << fixed << setprecision(1) << (b+c+d)/3;
	cout << "\n++++program by Guntinun++++";
}