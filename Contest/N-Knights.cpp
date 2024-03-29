#include <bits/stdc++.h>
using namespace std;

vector <long long> V;
bool mem[1000];
long long mx = INT_MIN;
long long A[100][100];

bool check()
{
    for (long long i = 0; i < V.size(); i++)
    {
        if (i - 1 >= 0)
        {
            if (abs(V[i] - V[i-1]) == 2)
            {
                return false;
            }
        }
        if (i - 2 >= 0)
        {
            if (abs(V[i] - V[i-2]) == 1)
            {
                return false;
            }
        }
        if (i + 1 < V.size())
        {
            if (abs(V[i] - V[i+1]) == 2)
            {
                return false;
            }
        }
        if (i + 2 < V.size())
        {
            if (abs(V[i] - V[i+2]) == 1)
            {
                return false;
            }
        }
    }
    return true;
}

void gen(long long m,long long n)
{
    if (V.size() == n)
    {
        if (check() == true)
        {
            long long sum = 0;
            for (long long i = 0; i < V.size(); i++)
            {
                //cout << V[i] << " ";
                sum += A[V[i]][i];
            }
            //cout << "\n";
            mx = max(mx,sum);
            return;
        }
    }
    else
    {
        for (long long i = 0; i < n; i++)
        {
            if (mem[i] == false)
            {
                V.push_back(i);
                mem[i] = true;
                gen(m+1,n);
                mem[i] = false;
                V.pop_back();
            }
            
        }
    }
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(mem,false,sizeof(mem));
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    gen(0,n);
    cout << mx;
}