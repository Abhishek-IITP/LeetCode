class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n= nums.size();
        int ans =0;
        for(int i=0;i<n;i++) {
            if(nums[i] == target) nums[i]=1;
            else nums[i]= -1;
        } 
        for(int i =0; i<n;i++){
            int currsum=0;
            for(int j =i; j<n;j++){
                currsum+=nums[j];
                if(currsum>0) ans++;
                
            }
        }
        return ans;
        
    }
};