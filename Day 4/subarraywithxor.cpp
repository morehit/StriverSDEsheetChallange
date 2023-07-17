int Solution::solve(vector<int> &a, int b) {
   int n = a.size() ; 
    int cnt =0 ; 
    int xr = 0 ; 
    unordered_map<int, int> mp ; 
    mp[xr]++ ; 
    for(int i=0 ; i< n ; i++ ){
       xr ^= a[i] ; 
       int x = xr ^ b ; 

       cnt += mp[x] ; 
       mp[xr]++ ; 
         
    }

    return cnt ;   
} 
