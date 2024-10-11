#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct XY
{
    ll x,y;
};

vector <ll> A;
vector <ll> D;
vector <XY> B;
vector <XY> C;
ll k,mn = INT_MAX;

void gena(ll n,ll m)
{
    if (n == m)
    {
        ll c = 0;
        for (ll i = 0; i < n; i++)
        {
            if (D[i] == 1)
            {
                c++;
            }
            if (c > k)
            {
                break;
            }
            // cout << D[i] << " ";
        }
        // cout << "\n";
        if (c <= k)
        {
            ll sumx = 0;
            ll sumy = 1;
            for (ll i = 0; i < n; i++)
            {
                if (D[i] == 1)
                {
                    sumx += C[i].x * -1;
                    sumy *= ll(ceil(double(C[i].y)/2.0));
                }
                else
                {
                    sumx += C[i].x;
                    sumy *= C[i].y;
                }
            }
            // cout << ">" << mn << "\n";
            mn = min(abs(sumx-sumy),mn);
            
        }
        return;
    }
    else
    {
        D.push_back(0);
        gena(n,m+1);
        D.pop_back();
        D.push_back(1);
        gena(n,m+1);
        D.pop_back();
    }
    
}

void genb(ll n,ll m)
{
    if (n == m)
    {
        while (!C.empty())
        {
            C.pop_back();
        }
        int c = 0;
        for (ll i = 0; i < n; i++)
        {
            // cout << A[i];
            if (A[i] == 1)
            {
                C.push_back({B[i].x,B[i].y});
                // cout << C[c].x << " " << C[c].y << "\n";
                c++;
            }
            
        }
        // cout << "\n";
        // cout << C.size() << "\n";
        if (C.size()>=2)
        {
            if (k == 0)
            {
                ll sumx = 0;
                ll sumy = 1;
                for (ll i = 0; i < C.size(); i++)
                {
                    sumx += C[i].x;
                    sumy *= C[i].y;
                }
                mn = min(abs(sumx-sumy),mn);
            }
            else
            {
                gena(C.size(),0);
            }
        }
        return;
    }
    else
    {
        A.push_back(0);
        genb(n,m+1);
        A.pop_back();
        A.push_back(1);
        genb(n,m+1);
        A.pop_back();
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,x,y;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        cin >> x >> y;
        B.push_back({x,y});
    }
    if (n == 1)
    {
        cout << abs(x-y);
        return 0;
    }
    
    genb(n,0);
    cout << mn;
    return 0;
}