class Solution {
public:

    void nextPermutation(vector<int>& nums) {
        int n = nums.size() , k , l; 
         
         for(k = n-2 ; k>=0 ; k--){
             if(nums[k] < nums[k+1]){
                 break; 
             }
         }
           if(k>=0 ){
               int j = n-1 ; 
               while( j>k && nums[j] <= nums[k])j-- ; 
               swap(nums[k] , nums[j]) ; 
           }

           reverse(nums.begin() + k+1 , nums.end() ) ; 
    }
};
