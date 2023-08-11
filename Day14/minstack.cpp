#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	
	
	public:
    stack<pair<int,int>> st ; 
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int val)
		{
			if(st.empty() || !st.empty() && st.top().second > val){
				st.push({val , val}) ; 
			}
			else{
				st.push({val , st.top().second }) ; 
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(!st.empty()){
				int el = st.top().first ; 
				st.pop() ;
				return el ; 
			}
			return -1 ; 
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(!st.empty()){
				int el = st.top().first ; 
				return el ; 
			}

			return -1 ; 
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(!st.empty()){
				int el = st.top().second ; 
				return el ; 
			}

			return -1 ;
		}
};