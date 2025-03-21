class Solution {
public:
    int minimumFlips(int n) {
        
        string s;
        while (n > 0) {
            s.push_back((n & 1) + '0');
            n >>= 1;
        }
        reverse(s.begin(), s.end());
        
        string t = s;
        reverse(t.begin(), t.end());  
        int flips = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != t[i]) flips++;
        }     
        return flips;
    }   
    
};