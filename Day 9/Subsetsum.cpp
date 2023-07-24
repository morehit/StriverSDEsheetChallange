
void solve(vector<int> arr , int ind , int n , vector<int> &ans, int sum  ){
        if(ind >= n ){
            ans.push_back(sum) ; 
            return ; 
        }
        // Intuition simple include exclude 
        //include 
        solve(arr , ind+1 , n , ans , sum + arr[ind] ); 
        solve(arr , ind+1 , n , ans , sum) ; 
        
        
    }
vector<int> subsetSum(vector<int> &num){
	    int N = num.size() ;
	    vector<int> ans ; 
        int sum =0 ; 
        solve(num , 0 , N , ans, sum ) ; 
		sort(ans.begin() , ans.end() ) ; 
		// reverse(ans.begin() , ans.end()) ; 
        
        return ans ; 	
}