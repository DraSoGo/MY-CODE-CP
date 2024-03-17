#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    string A;
    char COM[a];
    int NUM[a],j = 0,b,x,y,z;
    stack <int> STR;
    stack <int> RE;
    for (int i = 0; i < a; i++)
    {
        cin >> A;
        if (A == "PUSH")
        {
            COM[i] = 'P';
            cin >> NUM[i];
        }
        else if (A == "STORE")
        {
            COM[i] = 'S';
        }
        else if (A == "LOAD")
        {
            COM[i] = 'L';
        }
        else if (A == "PLUS")
        {
            COM[i] = 'p';
        }
        else if (A == "TIMES")
        {
            COM[i] = 'T';
        }
        else if (A == "IFZERO")
        {
            COM[i] = 'I';
            cin >> NUM[i];
        }
        else if (A == "DONE")
        {
            COM[i] = 'D';
        }
    }
    while (COM[j] != 'D')
    {
        if (COM[j] == 'P')
        {
            STR.push(NUM[j]);
        }
        else if (COM[j] == 'S')
        {
            b = STR.top();
            STR.pop();
            RE.push(b);
        }
        else if (COM[j] == 'L')
        {
            STR.push(RE.top());
        }
        else if (COM[j] == 'p')
        {
            x = STR.top();
            STR.pop();
            y = STR.top();
            STR.pop();
            z = x + y;
            STR.push(z);
        }
        else if (COM[j] == 'T')
        {
            x = STR.top();
            STR.pop();
            y = STR.top();
            STR.pop();
            z = x * y;
            STR.push(z);
        }
        else if (COM[j] == 'I')
        {
            if (STR.top() == 0)
            {
                j = NUM[j] - 1;
            }
            STR.pop();
        }
        j++;
    }
    cout << STR.top();
}