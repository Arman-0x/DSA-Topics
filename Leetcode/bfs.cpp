class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n=adj.size();
        int vis[n]={0};//arr to mark visited nodes
        
        vis[0]=1;
        queue<int>q;//queue to track nodes 
        q.push(0);
        
        vector<int>bf_s;//vector to store travesed nodes 
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            bf_s.push_back(temp);
            
            for(auto it:adj[temp]){//check all adj of node temp 
                if(!vis[it]){//if not visited then mark as vis=1
                    vis[it]=1;
                    q.push(it);//push into q
                }
            }
        }return bf_s;
    }
};
