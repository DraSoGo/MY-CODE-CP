#include <iostream>
using namespace std;
int main()
{
    float  a,c = 2,x = 1;
    cin >> a;
    while(x < a/2)
    {
    	x *= 2;
    	c++;
    }
    if(a == 1)
    {
    	c = 1;
    }
    cout << c;
}