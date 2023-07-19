class Solution {
public:
    int getlen (ListNode * head ){
        int cnt = 0 ; 
        ListNode * temp = head ; 
        while(temp != NULL ){
            cnt++ ; 
            temp = temp -> next ; 
        }
        return cnt ; 
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = getlen(head ) ; 
        cout<< "len " << len << endl; 
        if(len < k || head == NULL || head -> next == NULL  ){
            return head ; 
        }
        
        ListNode * prev = NULL ; 
        ListNode * curr = head ; 
        int cnt =0 ; 
        while(cnt < k ){
            ListNode * forward = curr -> next ; 
            curr -> next  = prev  ; 
            prev = curr ; 
            curr = forward ; 
            cnt++ ; 
        }
        
        head -> next = reverseKGroup(curr , k) ; 

        return prev ; 

    }
};