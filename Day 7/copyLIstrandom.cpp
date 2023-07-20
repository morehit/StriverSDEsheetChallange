class Solution {
public:
    Node* copyRandomList(Node* head) {
        // step 1 

        Node * front = head ; 
        Node * iter = head ; 

        while(iter != NULL ){
            front = iter -> next ; 
            Node * copy = new Node(iter -> val) ; 
            iter -> next = copy ; 
            copy -> next = front ; 
            iter =  front ; 
        }


        // step 2
        
        iter = head ; 
        while(iter != NULL ){
             if(iter -> random != NULL ){
                 iter -> next -> random = iter -> random -> next ; 
             }
             iter = iter -> next -> next ; 
        }

        // step 3 
        Node * pseudonode = new Node(-1) ; 
        Node * copy = pseudonode ; 
        iter = head ;  

        while(iter != NULL ){
            front = iter -> next -> next ; 
            copy -> next = iter -> next ; 
            iter -> next = front ; 
            iter = front  ; 
            copy = copy -> next ; 
        }

        return pseudonode -> next ; 
    }
    

};