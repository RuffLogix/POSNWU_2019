#include <bits/stdc++.h>

#define SIZE 8

using namespace std;

bool visited[] = {false,false,false,false,false,false,false,false};

void AddEdge(vector<int> adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

int DFS(vector<int> adj[],int src,int n){
    int count=0;

    stack<int> st;
    visited[src] = true;
    count++;
    st.push(src);
    while(!st.empty()){
        int s = st.top();
        st.pop();
        for(auto x : adj[s]){
            if(!visited[x]){
                count++;
                st.push(x);
                visited[x] = true;
            }
        }

    }
    
    if(count==0)return 1;
    return count;
}

int solve(vector<int> adj[],int n){
    int result = 1;
    for(int i=0 ; i<n ; i++){
        result = result * DFS(adj,i,n);
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> adj[SIZE];

    for(int i=0 ; i<n ; i++){
        int a,b;
        cin >> a >> b;
        AddEdge(adj,a,b);
    }

    cout << solve(adj,SIZE);

    return 0;
}
