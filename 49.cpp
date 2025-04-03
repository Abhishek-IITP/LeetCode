class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp1;
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            mp1[temp].push_back(strs[i]);
        }
        vector<vector<string>> finalans;
        for(auto x:mp1){
            finalans.push_back(x.second);
        }
        return finalans;
    }
};