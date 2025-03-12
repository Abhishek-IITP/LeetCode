class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> vec(n*n + 1, 0);
        int a, b;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                vec[grid[i][j]]++;
            }
        }
        for(int i=1; i<=n*n; i++){
            if(vec[i] == 1) continue;
            if(vec[i] == 0) b = i;
            else a = i;
        }
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};