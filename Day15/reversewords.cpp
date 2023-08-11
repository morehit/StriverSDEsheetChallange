
#include<bits/stdc++.h> 

string reverseString(string &str){
	        istringstream ss(str);
            stack<string> st ; 
        
            string word; 

            while (ss >> word)
            {
               st.push(word) ; 
            }
          string ans = ""; 
          while(!st.empty()){
              ans += st.top()  ; 
              ans += ' ' ; 
              st.pop() ; 
          }
          ans.pop_back() ; 
          
          return ans ; 	
}