
 int findPivot(int* nums, int n ){
        int st = 0 ; 
        int en = n -1 ; 

        while(st < en){
            int mid = st + (en-st)/2 ; 

            if(nums[mid] >= nums[0]){
                st = mid+1 ; 
            }
            else{
                en = mid ; 
            }
        }
        return en ; 
    }
    int binarySearh(int*  nums , int st  ,int en , int target){
        
        while(st <= en){
            int mid = st + (en-st)/2 ; 

            if(nums[mid] == target){
                return mid ; 
            }
            else if(nums[mid] > target){
                en = mid-1 ; 
            }
            else{
                st = mid+1 ; 
            }
        }

        return -1 ; 
    }
int search(int* arr, int n, int key) {

        int Pivot = findPivot(arr, n ) ; 
        int ans = -1 ; 
        if(key >= arr[Pivot] && key <= arr[n-1] ){
           ans =   binarySearh(arr , Pivot , n-1, key) ; 
        }
        else{
           ans =  binarySearh(arr , 0 , Pivot-1, key) ; 
        }

        return ans ; 
}