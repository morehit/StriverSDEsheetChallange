class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * dummy = new ListNode() ;

        dummy -> next = head ; 

        ListNode * slow = dummy ; 
        ListNode * fast = dummy ; 

        while(n-- ){
            fast = fast -> next ; 
        } 
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next ; 
            fast = fast -> next ; 
        }
        
        slow ->next = slow -> next-> next ; 
        
        return dummy -> next ; 

    }
};