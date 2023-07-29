// Stack class.
#define M 1e3 
class Stack {
    vector<int> stack ; 
    int Top = -1 ; 
    int size ; 
    
public:
    
    Stack(int capacity) {
        size = capacity ; 
    }

    void push(int num) {
        if(isFull())return ; 
        stack.push_back(num) ; 
        Top++; 
    }

    int pop() {
        if(isEmpty())return -1 ; 
        int num = stack[Top]; 
        stack.pop_back() ;
        Top-- ; 

        return num; 
    }
    
    int top() {
        if(isEmpty())return -1 ; 
        return stack[Top] ; 
    }
    
    int isEmpty() {
        if(stack.size() == 0 )return 1 ; 
        return 0 ; 
    }
    
    int isFull() {
        if(stack.size() >= size)return 1 ;
        return 0 ;  
    }
    
};
