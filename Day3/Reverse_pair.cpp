class Solution {
public:
void Merge(int low , int mid , int high , vector<int> & arr){
    vector<int> temp ; 
    int left = low ; 
    int right = mid+1 ; 

    while(left <= mid && right <= high ){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]) ; 
            left++ ; 
        }
        else{
            temp.push_back(arr[right]); 
            right++ ; 
        }
    }
    while(left <= mid ){
        temp.push_back(arr[left++]); 
    }
    while(right <= high ){
        temp.push_back(arr[right++]); 
    }

    for(int i= low ; i<= high ; i++ ){
        arr[i] = temp[i-low];
    }
}
//main function which counts the pairs 
int countPairs(vector<int> &arr , int low , int mid , int high){
	int right = mid+1 ; 
	int count =0 ; 
	for(int i= low ; i<=mid ; i++  ){

		while(right <= high && (long)arr[i] > (long)2*arr[right]) right++ ;

		count += (right - (mid+1));
	}
	return count ; 
}
int MergeSort(int low , int high , vector<int> &arr){
	int count =0 ; 
    if(low < high){
        int mid = (low + high )/2 ; 
        count+= MergeSort(low , mid , arr) ; 
        count+= MergeSort(mid+1 , high, arr);
        // count pair function call 
	    	count+= countPairs(arr, low , mid , high ) ;  
        Merge(low , mid , high , arr); 
    }
	return count ; 
} 
    int reversePairs(vector<int>& nums) {
        return MergeSort(0 , nums.size()-1 , nums) ; 
    }
};
