class Stack {
	queue<int> q ; 
   public:
    Stack() {
        
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return q.size() ; 
    }

    bool isEmpty() {
        if(q.size() == 0 ) return true ; 

        return false ; 
    }

    void push(int element) {
        q.push(element) ; 
        for(int i =0 ; i< q.size() -1 ; i++ ){
            q.push(q.front() ) ; 
            q.pop() ; 
        }
    }

    int pop() {
       if(isEmpty() )return -1 ; 
       int el = q.front() ; 
       q.pop() ; 
       return el; 
    }

    int top() {
       if(isEmpty()) return -1 ; 

       return q.front() ; 
    }
};