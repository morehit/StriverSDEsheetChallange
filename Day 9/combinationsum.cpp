
#include <bits/stdc++.h>
void solve(vector<int> &nums , int target , int ind , vector<int> temp , vector<vector<int>> &ans , int n ){
            if(target == 0 ){
                ans.push_back(temp) ; 
                return ; 
            }
            if(ind >= n )return ; 
      
        //include 
        if(nums[ind] <= target){
            temp.push_back(nums[ind]) ; 
            solve(nums , target - nums[ind] , ind+1 , temp , ans , n ) ;
            temp.pop_back() ; 
        }
         while(ind+1<nums.size() && nums[ind] == nums[ind+1]){
            ind++;
        }

         //exclude 
        solve(nums , target , ind+1 , temp , ans , n ) ; 

    }
vector<vector<int>> combinationSum2(vector<int> &nums, int n, int target){
	  vector<int> temp ; 
        vector<vector<int> > ans ;   
        // int n = nums.size() ; 
        
        sort(nums.begin() , nums.end() ) ; 
        solve(nums , target , 0 , temp , ans , n  ) ; 

        return ans ; 

}
