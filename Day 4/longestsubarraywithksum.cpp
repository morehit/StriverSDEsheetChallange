class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        int maxlen = 0 ; 
        
        int sum =0 ;
        
        
        unordered_map<int,int> mp ; 
        mp[0] = -1 ; 
        
        for(int i =0 ; i< n ; i++ ){
            sum += a[i] ; 
            
            if(mp.count(sum)){
                maxlen = max(maxlen , i - mp[sum]) ; 
            }
            else{
                mp[sum] = i ; 
            }
        }
        return maxlen ; 
    }
};
