
class Solution {
public:
    bool checkForCycle(int s, vector<vector<int>>& adj, vector<int>& visited) {
        queue<pair<int, int>> q;//will store node and parent 
        visited[s] = 1;
        q.push({s, -1});

        while (!q.empty()) {
            int node = q.front().first;
            int par = q.front().second;
            q.pop();

            for (auto it : adj[node]) {//check adj of node
                if (!visited[it]) {//if not visited
                    visited[it] = 1;//mark as 1 
                    q.push({it, node});//push adjacent ,and parent
                }
                else if (it != par) {//if visited but by diffrent parent that means cycle is there 
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& adj) {
        vector<int> visited(V + 1, 0); // For 1-based indexing

        for (int i = 1; i <= V; i++) {
            if (!visited[i]) {
                if (checkForCycle(i, adj, visited)) //for components 
                    return true;
            }
        }
        return false;
    }
};
