#include <bits/stdc++.h> 

void solve(vector<int> &nums , int ind , vector<int> temp , int n , set<vector<int> > &st ){
        if(ind >= n ){
            sort(temp.begin() , temp.end()) ; 
            st.insert(temp) ; 
            return ; 
        }

        temp.push_back(nums[ind]) ; 
        solve(nums , ind+1 , temp , n , st ) ; 
        temp.pop_back() ; 

        solve(nums, ind+1 , temp , n , st) ; 
    }
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
        set<vector<int> > st ; 
        vector<int> temp ; 

        solve( arr , 0 , temp , n , st) ; 

        vector<vector<int>> ans(st.begin() , st.end()) ; 

        return ans ; 
}