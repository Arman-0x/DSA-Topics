class Solution {
  
  private:
 bool bfs(int i, vector<vector<int>> &adj, int vis[])
{
      
      queue<int>q;
      vis[i]=0;
      q.push(0);
      
      while(!q.empty()){
          int node=q.front();
          q.pop();
          
          for(auto adjacent:adj[node]){
              if(!vis[adjacent]){
                  if(vis[node]==1){
                      vis[adjacent]=0;
                      q.push(adjacent);
                  }else{
                        vis[adjacent]=1;
                          q.push(adjacent);
                  }
              }
              else{//adjacent has same color
                  if(vis[adjacent]==vis[node]){
                      return false;
                  }
              }
              
          }
      }return true;
  }
  
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<vector<int>> adj(V); // if n is the number of nodes
for (auto &e : edges) {
    int u = e[0], v = e[1];
    adj[u].push_back(v);
    adj[v].push_back(u); 
}
    int    vis[V]={-1};
        for(int i=0 ;i<V;i++){
            if(vis[i]==-1){
            if(!bfs(i,adj,vis)){
                return false;
            }}
        }return true;
        
    // bfs(V,adj,vis);
    
    }
};
