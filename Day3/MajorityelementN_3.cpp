class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cn1 = 0 , cn2 =0 ; 
        //only two such element can exist in a array 
        int el1= INT_MIN , el2 = INT_MIN  ; 

        for(int i=0 ; i< nums.size() ; i++ ){
            if(cn1 == 0 && nums[i] != el2){
               cn1 =1 ; 
               el1 = nums[i] ; 
            }
            else if(cn2 == 0 && nums[i] != el1){
                cn2 =1 ; 
                el2 = nums[i] ; 
            }
            else if(el1 == nums[i]){
                cn1++ ; 
            }
            else if(el2 == nums[i]){
                cn2++ ; 
            }
            else{
                cn1-- ; cn2-- ; 
            }
        }
        int cnt1 =0 , cnt2 =0 ; 

        for(int i=0 ;i< nums.size() ; i++ ){
            if(nums[i] == el1 )cnt1++ ; 
            else if(nums[i] == el2 )cnt2++ ; 
        }
        int n = nums.size() ; 

        vector<int> ans ; 
        if(cnt1 > n/3)ans.push_back(el1); 
        if(cnt2 > n/3)ans.push_back(el2); 

        return ans ; 
    }
};
