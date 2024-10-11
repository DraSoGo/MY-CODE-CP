#include <bits/stdc++.h>
#define coutf(n, m) cout << fixed << setprecision(n) << m
#define forr(i, a, n) for (int i = a; i < n; i++)
#define forl(i, a, n) for (int i = a; i > n; i--)
#define macos ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll "\n"
#define sp " "
typedef long long ll;
using namespace std;

void solve(string in,int z){
    cout << in << '\n';

    ofstream fout;
    fout.open(in);

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<ll> ranN(2,ll(1e2));
    uniform_int_distribution<ll> ranM(ll(1e5),ll(1e6));
    uniform_int_distribution<ll> ranPi(1,ll(1e4));


    ll n,m;
    ll A[int(1e4+1)];
    while(1){
        n = ranN(gen), m = ranM(gen);
        forr(i,1,n+1){
            ll temp = ranPi(gen);
            A[i] = temp + A[i-1];
        }
        int mx = 0;
        bool same = false;
        forr(i,1,n+1){
            forr(j,i,n+1){
                ll sum = A[j]-A[i-1];
                if(sum>=m)break;
                if(mx==j-i+1)same = true;
                if(mx<j-i+1)mx=j-i+1,same = false;
            }
        }
        if(!same)break;
    }

    fout << n << sp << m << endll;
    forr(i,1,n+1)fout << A[i]-A[i-1] << sp;
}

int main() {

    for(int i = 1; i <= 10; i++){
        solve("./input/input" + (i == 10 ? "10" : "0" + to_string(i)) + ".txt",i);
    }

    return 0;
}