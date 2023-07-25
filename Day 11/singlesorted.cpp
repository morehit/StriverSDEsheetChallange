int singleNonDuplicate(vector<int>& nums)
{
	    if(nums.size() == 1)return nums[0]; 

        if(nums[0] != nums[1]) return nums[0] ; 

        
         int low =0 ; 
         int high = nums.size() -1 ; 

         if(nums[high] != nums[high-1]) return nums[high] ; 

         while(low <= high){
             int mid = (low +high)/2 ; 

             if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                 return nums[mid]; 
             }
             else if(nums[mid] == nums[mid-1] && mid%2 == 0|| nums[mid] == nums[mid+1] && (mid+1)%2 == 0  ){
                  high = mid-1 ; 
             }
             else {
                  low = mid+1 ; 
             }
         }

         return -1 ;
}