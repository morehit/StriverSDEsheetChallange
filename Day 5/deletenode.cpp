//only pointer to the node to be deleted is given and given node is not a tail node
class Solution {
public:
    void deleteNode(ListNode* node) {
        
               node -> val  = node -> next -> val ; 
               node -> next = node -> next -> next ;
    }
};