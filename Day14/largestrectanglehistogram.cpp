#include <stack>
#include <bits/stdc++.h>
vector <int> prevsmallerelements(vector <int> arr, int n){
    vector <int> ans(n) ; 
    stack<int> s; 
    s.push(-1); 
    
    for(int i=0  ;i<n ; i++){
        while( s.top() != -1 && arr[s.top()] >= arr[i]){
            s.pop(); 
        }
        ans[i] = s.top(); 
        s.push(i); 
    }
    return ans ;
}

vector <int> nextsmallerelements(vector <int> arr, int n){
    vector <int> ans(n) ; 
    stack<int> s; 
    s.push(-1); 
    
    for(int i=n-1 ; i>=0 ; i--){
        while(s.top() != -1 && arr[s.top()] >= arr[i]){
            s.pop(); 
        }
        
        ans[i] = s.top(); 
        s.push(i); 
    }
    return ans ;
}

int largestRectangle(vector < int > & heights) {
        int n = heights.size(); 

        int nextSmaller[n] ; 
        int prevSmaller[n] ; 

        stack<int> st ; 

        for(int i =0 ; i< n ; i++ ){
           while( !st.empty() && heights[st.top()] >= heights[i]){
               st.pop() ; 
           }

           if(st.empty()){
               nextSmaller[i] =  0 ; 
           }
           else{
               nextSmaller[i] = st.top() +1 ; 
           }

           st.push(i) ; 
        }

        while(!st.empty()) st.pop() ; 

        for(int i = n-1; i>=0  ; i--){
           while( !st.empty() && heights[st.top()] >= heights[i]){
               st.pop() ; 
           }
           if(st.empty()){
               prevSmaller[i] = n-1 ; 
           }
           else{
                prevSmaller[i] = st.top() - 1 ; 
           }
           st.push(i) ; 
        }
      int maxA = 0 ; 
      for(int i =0 ; i< n ; i++ ){
           maxA = max(maxA , heights[i]*( prevSmaller[i] - nextSmaller[i] +1) ) ; 
      }

      return maxA ; 
    
 }