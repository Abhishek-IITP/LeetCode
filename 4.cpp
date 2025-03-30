class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result = nums1;
        result.insert(result.end(), nums2.begin(), nums2.end());

        sort(result.begin(),  result.end());

        int n = result.size();
        double ans =0;

        if(n%2==0){
            int mid1 = n / 2 - 1;
            int mid2 = n / 2;
            ans = (result[mid1] + result[mid2]) / 2.0;
        }
        else{
            int mid = n / 2;
            ans = result[mid];
        }
        return ans;


        
    }
};