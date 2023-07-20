class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if(head == NULL || head -> next == NULL  ){
             return head ; 
         }

         ListNode * temp = head ;

         int len =1 ;   

         while( temp -> next && ++len ){
             temp = temp -> next ; 
              
         }

         temp -> next = head ; 

         k = k%len ; 
           
         int cnt = len - k ; 

         while(cnt--){
             temp = temp -> next ; 
         }

         head = temp -> next ; 
         temp -> next = NULL ; 

         return head ; 
    }
};