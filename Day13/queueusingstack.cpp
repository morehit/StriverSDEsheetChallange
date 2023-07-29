class Queue {
    // Define the data members(if any) here
    stack<int> input ;
    stack<int> output ;  

    public:
    Queue() {

    }

    void enQueue(int val) {
        input.push(val) ; 
    }

    int deQueue() {
        if(isEmpty()) return -1 ; 
        if(output.size() == 0 ){
            while(!input.empty()){
                output.push(input.top()) ; 
                input.pop() ; 
            }
        }
        int el = output.top() ; 
        output.pop() ; 
        return el ; 
    }

    int peek() {
        if(isEmpty()) return -1 ; 
        if(output.size() == 0 ){
            while(!input.empty()){
                output.push(input.top()) ; 
                input.pop() ; 
            }
        }
       
       return output.top() ; 
    }

    bool isEmpty() {
       if(input.size() == 0 && output.size() == 0 ) return true ; 

       return false ; 
    }
};