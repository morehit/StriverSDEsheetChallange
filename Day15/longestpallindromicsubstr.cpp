string longestPalinSubstring(string s) {
        int n = s.size() ; 
        vector<vector<int>> dp(n , vector<int> (n , 0 ));

        int maxlen =0 ; 
        string ans ;  

        for(int diff = 0 ; diff < n ; diff++ ){

            for(int i =0 , j = i+diff ; j< n ; i++ ,j++ ){
                  
                  if(i==j ){
                      dp[i][j] =1 ; 
                  }
                  else if(diff == 1 ){
                      dp[i][j] = (s[i] == s[j])? 2 : 0 ; 
                  }
                  else{
                      if(s[i] == s[j] && dp[i+1][j-1]){
                          dp[i][j] = dp[i+1][j-1] + 2 ; 
                      }
                  }

                if(dp[i][j]){
                     if(j-i+1  > maxlen ){
                         maxlen = j-i+1 ; 
                         ans = s.substr(i , maxlen ) ; 
                     }
                }
            }
        }
        return ans ; 
}