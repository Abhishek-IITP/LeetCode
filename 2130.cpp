class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> vec;
        while(head != NULL){
            vec.push_back(head-> val);
            head= head->next;
        }

        int start =0;
        int end= vec.size()-1;
        int ans = INT_MIN;
        while(start<end){
            int sum = vec[end] + vec[start];
            ans=max(ans,sum);
            start++;
            end--;
        }
        return ans;
        
    }
};