class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ansHead = new ListNode() ; 
        ListNode * forward = ansHead  ; 
        int carry =0 ; 
        while(l1!= NULL || l2 != NULL || carry ) {
             int sum = 0 ; 
             if(l1 != NULL ){
                  sum += l1 -> val ; 
                  l1 = l1 -> next ; 
             }

             if(l2 != NULL ){
                  sum += l2 -> val ; 
                  l2 = l2 -> next ; 
             }
             
             sum += carry ; 
             int dig = sum % 10 ; 
             carry = sum / 10 ;

             ListNode * temp = new ListNode(dig) ; 
             forward -> next = temp ; 
             forward = temp ; 
        }
     return ansHead -> next ; 
    }
};