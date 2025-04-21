class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = 0;
        while(start < s.length()){
            while(s.length()>end && s[end] != ' '){
                end++;
            }
            int i = start;
            int j = end-1;
            while(i<j){
                char temp = s[i];
                s[i] = s[j]; 
                s[j]=temp;
                i++;
                j--;
            }
            start = end+1;
            end= start;
        }
        return s;

        
    }
};