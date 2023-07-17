class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if(nums.size() == 0 ) return 0 ; 

         int longest = 1 ; 
         unordered_set<int> st ; 

         for(int i=0 ; i< nums.size() ; i++ ){
             st.insert(nums[i]) ; 
         }

         int cnt = 0 ; 
         int lastelement = INT_MIN ; 

         for(auto it: st ){
             if(st.find(it-1) == st.end() ){
                 cnt = 1 ; 
                 lastelement = it ; 

                 while(st.find(lastelement+1) != st.end()){
                     cnt++ ; 
                     lastelement = lastelement+1 ; 
                 }
                 longest = max(longest , cnt ) ; 
             }
         }


         return longest ; 
    }
};