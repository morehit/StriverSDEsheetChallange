
bool CanPlace(int cows , vector<int> &stalls , int n , int k ){
      
      int cowcnt= 1 ; 
      int prev = stalls[0]; 
          for(int i = 1  ; i<  n ; i++ ){
              if(stalls[i] - prev >= cows){
                  cowcnt++ ; 
                  prev = stalls[i] ; 
              }
              
              if(cowcnt >= k ){
                  return true ; 
              }
            }
 
            return false ; 
}
int aggressiveCows(vector<int> &stalls, int k)
{   
    int n = stalls.size() ; 
    sort(stalls.begin() , stalls.end()); 
    int low = 0 , high = stalls[n-1] - stalls[0];
    int ans =-1 ; 
    while(low <= high ){
        int mid = (low + high) >> 1 ; 

        if(CanPlace(mid ,stalls , n , k )){
            ans = mid ; 
            low = mid+1 ;  
        }
        else {
             high = mid-1 ; 
        }
    } 
    return high ; 
}