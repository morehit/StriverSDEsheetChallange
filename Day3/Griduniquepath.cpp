class Solution {
public:
   // Memoization code 
    int solve(int i , int j , int m , int n , vector<vector<int> > &dp ){
        if(i == m-1 || j == n-1 ){
            return 1 ; 
        }

        if(dp[i][j] != -1 ){
            return dp[i][j] ; 
        }

        dp[i][j] = solve(i, j+1 , m , n, dp  ) + solve(i+1, j , m , n, dp  ) ; 


        return dp[i][j] ; 


    }
    //Tabulation code 
    int solvetab( int m , int n ){
         vector<vector<int> > dp (m , vector<int> (n , 1 )) ; 
         dp[m-1][n-1] = 1; 

         for(int i = m-2 ; i>=0 ; i-- ){
             for(int j = n-2 ; j>=0 ; j--){
                 dp[i][j] = dp[i][j+1] + dp[i+1][j] ; 
             }
         }
         return dp[0][0] ; 
    }
    int uniquePaths(int m, int n) {
        // vector<vector<int> > dp (m , vector<int> (n , -1 )) ; 
        int ans =0 ; 
        ans = solvetab(m , n ) ; 

        return ans ; 
    }
};
