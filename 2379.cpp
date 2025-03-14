class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int w = 0;
        int ct = 100;
        for(int i = 0; i <= n - k; ++i){
            w = 0; 
            for(int j = i; j < i + k; ++j) if(blocks[j] == 'W') w++;
            ct = min(ct, w);
        }
        return ct;
    }
};