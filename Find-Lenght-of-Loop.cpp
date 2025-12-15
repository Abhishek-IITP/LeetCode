class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow= slow->next;
            fast = fast->next->next;
            if(slow== fast) break;
        }
        if(fast== NULL || fast-> next == NULL)  return 0;
        
        Node* n1= head;
        Node* n2 = slow;
        
        while(n1!=n2){
            n1= n1->next;
            n2= n2->next;
        }
        
        int len =1;
        
        Node* curr = n1->next;
        while(curr !=n1){
            len++;
            curr= curr->next;
            
        }
        return len;
        
    }
};