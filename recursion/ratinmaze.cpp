class Solution {
  public:
    vector<string>result;
    
     bool isSafe(int i, int j, int n){
         if(i>=0 && i<n && j>=0 && j<n){
             return true;
         }return false;
     }
     void  solve(vector<vector<int>>& maze, int i,int j,int n, string & path) {
         if(!isSafe(i,j,n)|| maze[i][j]==0)//no path{
          {
                 return ;//backtrack
          }
          
         if(i==n-1 && j==n-1){
             result.push_back(path);
             return ;
         }
             
        maze[i][j]=0;//first mark 0 the n explore l ,r, u , D
        
        path.push_back('D');//down , explore pop
        solve(maze,i+1,j,n, path);
        path.pop_back();
        
        path.push_back('R');//right , explore pop
        solve(maze,i,j+1,n, path);
        path.pop_back();
        
        path.push_back('U');//up , explore pop
        solve(maze,i-1,j,n, path);
        path.pop_back();
        
        path.push_back('L');//left , explore pop
        solve(maze,i,j-1,n, path);
        path.pop_back();
        
        maze[i][j]=1;//after explore backtrack
        
     
     }
    
      
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n=maze.size();
        string path="";
      solve(maze, 0,0,n,path);
      sort(result.begin(), result.end());
      return result;
        
        
    }
};