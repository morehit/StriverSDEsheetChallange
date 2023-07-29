#include <queue> 
//make a custom class for the heap
class node {
    public: 
    int data ; 
    int i ; 
    int j ; 
    
    node(int data , int row , int col){
        this-> data = data ; 
        i = row ; 
        j = col ; 
    }
};
// make a custom comparator 
class compare {
    public: 
    bool operator ()(node * a, node *b) {
       return a -> data >  b -> data  ;   
    }
};


vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
     //step 1:  Make a minheap 
       priority_queue<node* , vector<node * > , compare>  mini ; 
       vector<int> ans ; 
    
       // put the first element of each array into the heap 
         for(int i =0 ; i< k ; i++){
             node * tmp = new node(kArrays[i][0] , i , 0); 
             mini.push(tmp); 
         }
    // step 2: take the top element of mini store it into the answer array 
        
       // pop the heap 
       // insert ethe next element of the same array into the heap 
    
    // repeat step 2 while the heap is not emtpy 
    
    while(mini.size() > 0){
        node * top = mini.top(); 
        mini.pop(); 
        
        ans.push_back(top-> data); 
        
        int i = top -> i ; 
        int j = top -> j ; 
        
        if(j+1 < kArrays[i].size()) {
            node * next = new node(kArrays[i][j+1] , i , j+1 ); 
            mini.push(next); 
        }
    }

    return ans ; 
    
}
