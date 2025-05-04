class Solution {
public:

    void bfs(vector<vector<char>>& grid, int r, int c){
        
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int,int>> q;
        q.push({r,c});
        grid[r][c] = '0';
        
        int  dirs[4][2] ={
            {0,1},
            {1,0},
            {0,-1},
            {-1,0}
        };

        while(!q.empty()){
            
            auto cur = q.front();
            q.pop();

            int cR = cur.first;
            int cC = cur.second;
            for(auto &dir:dirs){
                int nR = cR + dir[0];
                int nC = cC + dir[1];
                if (nR < 0 || nC < 0 || nR >= rows || nC >= cols)
                    continue;
                if(grid[nR][nC] =='0') continue;

                grid[nR][nC] = '0';
                q.push({nR,nC});
            }
        }


    }


    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int count = 0;
 
        for(int  i =0; i<grid.size(); i++){
            for(int j =0; j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    count++;
                    bfs(grid,i,j);
                }
            }
        }
        return count;
        
    }
};