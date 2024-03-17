#include<bits/stdc++.h>
using namespace std;
#define V 4
#define INF 99999
int G[V][V];
int dist[V][V];
void add_edge(int u,int v,int w){
    G[u][v] = w;
}
void print2d_array(){
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(dist[i][j]==INF)
                cout << "INF ";
            else
            cout << dist[i][j]<<" ";
        }cout <<endl;
    }
}
void Floyd(){
    for(int i=0;i<V;i++)
        for(int j=0;j<V;j++)
            dist[i][j] = G[i][j];
    print2d_array();
    for(int k=0;k<V;k++){
        for(int i =0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j] = dist[i][k]+dist[k][j];
                }
            }
        }
    }
    print2d_array();
}
main(){


    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(i==j)
                add_edge(i,j,0);
            else
                add_edge(i,j,INF);
        }
    }
    add_edge(0,1,5);
    add_edge(0,3,10);
    add_edge(1,2,3);
    add_edge(2,3,1);
    Floyd();

}
