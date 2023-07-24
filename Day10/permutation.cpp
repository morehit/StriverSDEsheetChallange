#include <bits/stdc++.h> 

    void solve(string &s, int index , vector<string> & ans  ){
        if(index == s.size()){
	            ans.push_back(s); 
	            return ; 
	        }
	        
	        for(int i = index ; i< s.size(); i++){
	                 swap(s[index] , s[i]); 
	                 solve(s , index+1 , ans ) ; 
	                 swap(s[index] , s[i]); 
	 
	        }
	    }
	
vector<string> findPermutations(string &s) {
        vector<string> ans;
        solve(s , 0 , ans); 

        return ans ; 
}