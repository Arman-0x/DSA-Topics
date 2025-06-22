class Solution {
  private:
  vector<int> DFS(int node,int vis[],vector<vector<int>>& adj,vector<int>&ans){
      
      vis[node]=1;//visited
      ans.push_back(node);//push into ans vector 
      
      for(auto it:adj[node]){//if that node has neighbours 
          if(!vis[it]){//if they are not visited 
              DFS(it,vis,adj,ans);//traverse them 
          }
      }return ans;
  }
  
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        //size of adj
        int start=0;//starting node
        int vis[n]={0};//visited array
        
        vector<int>ans;//traversed node will be stored here
        
        DFS(start,vis,adj,ans);//call 
        return ans;
        
    }
};
