#include <bits/stdc++.h>

using namespace std;

void AddEdge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void DFS(vector<int> adj[],int src,int n){
    bool visited[n];
    memset(visited,false,sizeof(visited));

    stack<int> st;
    visited[src] = true;
    st.push(src);
    while(!st.empty()){
        int s = st.top();

        cout << s << " ";

        st.pop();

        for(auto x : adj[s]){
            if(!visited[x]){
                st.push(x);
                visited[x] = true;
            }
        }

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

    DFS(adj,0,n);

    return 0;
}
