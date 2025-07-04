class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
       vector<vector<int>> adj(V); // adjacency list

    for (auto edge : edges) {
      int u = edge[0];
        int v = edge[1];

        adj[u].push_back(v);
       // adj[v].push_back(u); // remove this line for directed graph
    }
        
int indegree[V]={0};
//find indegree of all nodes
for(int i=0;i<V;i++){
    for(auto it:adj[i]){
        indegree[it]++;
    }
}
    queue<int>q;
    
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    
    vector<int>topo;
    
    while(!q.empty()){
        int node =q.front();
        q.pop();
        
        topo.push_back(node);
        //node is in your topo sort 
        //so please remove it from the indegree
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
                
            }
        }
       
    } return topo;


    }
};
