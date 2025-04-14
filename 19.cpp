class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode dummy(0);
        dummy.next = head;
        
        int len = 0;
        ListNode* l = head;

        while(l != nullptr){
            len++;
            l= l->next;
        }
        int d = len-n+1;
        ListNode* prev = &dummy;
        ListNode* curr= head;

        int i=0;

        while(i<(d-1)){
            curr= curr->next;
            prev= prev->next;
            i++;
        }
        prev->next = curr->next;
        return dummy.next;
        
    }
};