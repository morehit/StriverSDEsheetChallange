
bool isPallindrome(string s, int st , int en){
        while(st <= en ){
            if(s[st] != s[en]){
                return false ; 
            }
            st++ ; en-- ; 
        }
        return true ; 
    }
void solve(string s , vector<vector<string>> &ans , vector<string> path , int index) {
           if(index == s.size()){
               ans.push_back(path) ; 
               return ; 
           }

           for(int i = index ; i< s.size() ; i++ ){
               if(isPallindrome(s , index , i )){
                  path.push_back(s.substr(index , i - index + 1 )) ; 
                  solve(s , ans , path , i+1 ) ; 
                  path.pop_back() ; 
               }
           }
    }
vector<vector<string>> partition(string s) {
        vector<vector<string>> ans ;
        vector<string> path ; 

        solve(s , ans , path , 0 ) ; 

        return ans ; 

}
