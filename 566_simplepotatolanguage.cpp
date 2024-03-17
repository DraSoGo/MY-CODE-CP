#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long> v;
    stack <long long> s;
    long long sum;
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'T')
        {
            int j = i+1;
            while (a[j] >= '0' && a[j] <= '9')
            {
                v.push_back(a[j] - '0');
                j++;
            }
            sum = 0;
            int h = 0;
            for (int k = v.size()-1; k >= 0; k--)
            {
                sum += pow(10,h) * v[k];
                h++;
            }
            s.push(sum%256);
        }
        if (a[i] == 'P')
        {
            s.pop();
        }
        if (a[i] == 'A')
        {
            int x,y;
            x = s.top();
            s.pop();
            y = s.top();
            s.pop();
            s.push((x+y)%256);
        }
        if (a[i] == 'M')
        {
            int x,y;
            x = s.top();
            s.pop();
            y = s.top();
            s.pop();
            s.push((x*y)%256);
        }
        if (a[i] == 'S')
        {
            int x,y;
            x = s.top();
            s.pop();
            y = s.top();
            s.pop();
            s.push((256 + x-y)%256);
        }
        if (a[i] == 'B')
        {
            cout << s.top() << "\n";
        }
        v.clear();
    }
    
}