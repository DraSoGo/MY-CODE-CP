#include <bits/stdc++.h>
using namespace std;
main()
{
    string a,b;
    int d;
    float c;
    cout << "Enter Product ID : ";cin >> a;
    cout << "Enter Product Name : ";cin >> b;
    cout << "Enter Product Unit Price : ";cin >> c;
    cout << "Enter Quantity : ";cin >> d;
    cout << "ID:" << a <<", Name:" << b << ", Unit Price:";
    cout << fixed << setprecision(2) << c;
    cout << ", Quantity:" << d << ", Total Amount:";
    cout << fixed << setprecision(2) << c*d;
	cout << "\n++++program by Guntinun++++";
}