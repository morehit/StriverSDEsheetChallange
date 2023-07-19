class Solution {
public:
    ListNode * reverse(ListNode * head ){
        if(head == NULL || head -> next == NULL ){
            return head ; 
        }

        ListNode * prev = NULL ; 
        ListNode * curr = head ; 
        while(curr != NULL  ){
            ListNode * forward = curr -> next ; 
            curr -> next  = prev  ; 
            prev = curr ; 
            curr = forward ; 
        }
        return prev ; 
    }
    bool isPalindrome(ListNode* head) {
         if(head -> next == NULL || head -> next == NULL  ){
             return true ; 
         }

         ListNode * slow = head ; 
         ListNode * fast = head ; 

         while(fast ->next != NULL  && fast -> next -> next != NULL ){
             slow = slow -> next ; 
             fast = fast -> next -> next ; 
         }
         
         slow -> next = reverse(slow -> next ) ;

         slow = slow -> next ;

         fast = head ; 

         while(slow != NULL ){
              if(fast -> val != slow -> val ){
                  return false ; 
              }
              slow = slow -> next ; 
              fast = fast -> next ; 
         }  


      return true ; 
    }
};