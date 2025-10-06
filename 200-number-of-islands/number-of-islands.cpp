class Solution {
public:

    void bfs(int row , int col , vector<vector<int>> &vis , vector<vector<char>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});


            //traversing all neighbour along with marking them visited as all neighbour value 
            // varry from -1 to 1 either we can take  8 different direction or just loop -1 to +1
            int drow[4] = {-1, 0, 1, 0};
            int dcol[4] = {0, 1, 0, -1};


            // for this question we need only 4 durection that is horizontal and vertical 

                   while(!q.empty()){
                   int r = q.front().first;
                   int c = q.front().second;
                   q.pop();

                   for(int i = 0; i < 4; i++){
                      int nrow = r + drow[i];
                      int ncol = c + dcol[i];
                   if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                   }
                }
            }
        }
    

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]== '1'){
                     count++;
                    bfs(row, col,vis,grid);
                }
            }
        }

        return count;
    }
};