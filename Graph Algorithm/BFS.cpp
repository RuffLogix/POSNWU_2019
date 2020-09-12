#include <bits/stdc++.h>

using namespace std;

void AddEdge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void BFS(vector<int> adj[],int src,int n){
    int dist[n];
    memset(dist,0,sizeof(dist));

    bool visited[n];
    memset(visited,false,sizeof(visited));

    queue<int> q;
    visited[src] = true;
    q.push(src);
    while(!q.empty()){

        cout << q.front() << " ";

        for(auto x : adj[q.front()]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                dist[x] = dist[q.front()] + 1;
            }
        }
        
        q.pop();
    }

    cout << "\n";

    for(int i=0 ; i<n ; i++){
        cout << src << " -> " << i << " : " << dist[i] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 10;

    vector<int> adj[n];
    AddEdge(adj,0,1);
    AddEdge(adj,0,2);
    AddEdge(adj,0,3);
    AddEdge(adj,1,4);
    AddEdge(adj,4,8);
    AddEdge(adj,2,5);
    AddEdge(adj,2,6);
    AddEdge(adj,5,9);
    AddEdge(adj,3,7);

    BFS(adj,0,n);

    return 0;
}