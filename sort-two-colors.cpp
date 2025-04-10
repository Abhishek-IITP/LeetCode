class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j= nums.size()-1;
        while (i<j){
          if(nums[i]==0 && nums[j]==1){
               i++;
               j--;
          }
          else if(nums[i]==0 && nums[j]!=1){
               i++;
          }
          else if(nums[i]!=0 && nums[j]==1){
               j--;
          }
          else{
               swap(nums[i],nums[j]);
               i++;
               j--;
          }
        }   
    }
};