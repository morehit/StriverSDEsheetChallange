
void solve(vector<int> &nums , int target , int ind , vector<int> temp , vector<vector<int>> &ans , int n  ){
        if(ind == n ) {
            if(target == 0 ){
            ans.push_back(temp) ; 
           }
           return ; 
        }

        solve(nums, target , ind+1 , temp , ans , n ) ; 

        temp.push_back(nums[ind]) ; 

        solve(nums ,target -  nums[ind], ind+1 , temp , ans , n ) ; 

        return ; 
    }
vector<vector<int>> findSubsetsThatSumToK(vector<int> nums, int n, int k)
{
        vector<int> temp ; 
        vector<vector<int> > ans ;   
        
        // sort(nums.begin() , nums.end() ) ; 
        solve(nums , k , 0 , temp , ans , n  ) ; 

        return ans ; 
}