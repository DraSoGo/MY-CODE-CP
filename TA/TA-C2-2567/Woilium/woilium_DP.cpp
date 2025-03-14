#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=5001;
int n,m,o,pre,now=1;
ll arr[102][102],arr2[102][102],dp[2][102][N];

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m >> o;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            arr2[i][j]=arr[i][j-1]+arr[i][j+1];
        }
    }
    for(int i=1; i<=m; i++){
        for(int j=0; j<=o; j++){
            dp[0][i][j]=dp[1][i][j]=-1;
        }
        dp[0][i][o]=0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            ll res=0,tmp;
            for(int k=1; k<=o; k++){
                dp[now][j][k]=-1;
                if(k+arr2[i][j]>o)continue;
                if(j>1&&dp[pre][j-1][k+arr2[i][j]]!=-1)dp[now][j][k]=dp[pre][j-1][k+arr2[i][j]]+arr[i][j];
                if(dp[pre][j][k+arr2[i][j]]!=-1)dp[now][j][k]=max(dp[now][j][k],dp[pre][j][k+arr2[i][j]]+arr[i][j]);
                if(j<m&&dp[pre][j+1][k+arr2[i][j]]!=-1)dp[now][j][k]=max(dp[now][j][k],dp[pre][j+1][k+arr2[i][j]]+arr[i][j]);
            }
        }
        swap(pre,now);
    }
    ll ansW=-1,ansO=0;
    for(int i=1; i<=m; i++){
        for(int j=o; j>=1; j--){
            if(dp[pre][i][j]>ansW){
                ansW=dp[pre][i][j];
                ansO=j;
            }
        }
    }
    cout << ansW << '\n' << ansO;

    return 0;
}