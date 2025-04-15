
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode dummy(0);
        dummy.next = head;
        
        ListNode* l = head;
        int jumps =0;


        // 0, 1, 2, 3, 4, 5
        //          P
        //                   c
        while(jumps<n &&  l != nullptr){
            l= l->next;
            jumps++;
        }
        ListNode* prev = &dummy;
        ListNode* curr= l;

        int i=0;

        while(curr != NULL){
            curr= curr->next;
            prev= prev->next;
        }
        prev->next = prev->next->next;
        return dummy.next;
        
    }
};