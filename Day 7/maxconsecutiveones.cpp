class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcnt = 0 ; 

        int i = 0 ;
        int n = nums.size() ; 
        while( i <  n ){
              if(nums[i] == 1 ){
                  int len =0 ; 
                  while(i< n && nums[i] == 1 ){
                      len++ ; 
                      i++ ; 
                  }
                  maxcnt = max(maxcnt , len ) ; 
              }
              else i++ ; 
              
        }
        
        return maxcnt ; 
    }
};