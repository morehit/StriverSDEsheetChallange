bool isValidParenthesis(string s)
{

     stack<char> st ; 

       for(int i = 0 ; i< s.size() ; i++){
           int ch = s[i] ; 

           if(ch == '(' || ch == '{' || ch == '['){
               st.push(ch); 
           }
           else{
               if(st.empty()){
                   return false ; 
               }
               else{
                   int top = st.top(); 
                   if(ch == ')' && top == '(' || ch == '}' && top == '{' || ch == ']' && top == '['){
                       st.pop() ; 
                   }
                   else {
                       return false ; 
                   }
               }
           }
      
       }

         if(st.empty()){
               return true ; 
           }
    return false ; 
}