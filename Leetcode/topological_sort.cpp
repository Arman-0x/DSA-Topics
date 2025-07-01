class Solution {
  
  private: void dfs(int node,int vis[],vector<vector<int>>&adj,stack<int>& st
){
    vis[node]=1;//mark visited
    
    for(auto it :adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj,st) ;//it is adj node of 'node'
        }
    }st.push(node);
}
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
int vis[V]={0};
stack<int> st;

 vector<vector<int>>adj(V);
 
for(auto &e: edges){
       int u = e[0];
        int v = e[1];
        adj[u].push_back(v);
//adj[v].push_back(u);
        
}


for(int i=0;i<V;i++){
    if(!vis[i]){
        dfs(i,vis,adj,st);
    }
}
vector<int >ans;
while(!st.empty()){
    ans.push_back(st.top());
    
    st.pop();
}return ans;
    
    }
};
