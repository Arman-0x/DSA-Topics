class Solution {
  
  private:
 bool dfs(int node,int col, vector<vector<int>> &adj, vector<int> &color)
{
    color[node]=col;
    for(auto it:adj[node]){
        if(color[it]==-1){
            if(dfs(it,!col,adj,color)==false){
                return false;
            }
        }
        else if(color[it]==col){
            return false;
        }
    }
    
        
    return true;
    
     
  }
  
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
       int u=edges[0].size();
       int v=edges.size();
       vector<vector<int>>adj(V);
       
       for(auto &e:edges){
          int u = e[0], v = e[1];
    adj[u].push_back(v);
    adj[v].push_back(u);
       }
       
        vector<int> color(V, -1);
       
       for(int i=0;i<V;i++){
           if(color[i]==-1){
           if(!dfs(i,0,adj,color)){
               return false;
           }}
       }return true;
       
       
    }
};
