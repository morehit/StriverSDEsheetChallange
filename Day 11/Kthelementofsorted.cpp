#include <bits/stdc++.h>

int ninjaAndLadoos(vector<int> &arr1, vector<int> &arr2, int m, int n, int k) {
     if(m<n )
          return ninjaAndLadoos(arr2, arr1, n, m, k);
        
        int low = max(0,k-n), high = min(k,m);
        
        while(low<=high){
            int cut1 = (low+high) >> 1;
            int cut2 = k - cut1;

            int l1 = cut1?   arr1[cut1-1]:INT_MIN;
            int l2 = cut2?   arr2[cut2-1]: INT_MIN;
            int r1 = cut1<m?  arr1[cut1]: INT_MAX;
            int r2 = cut2<n? arr2[cut2]: INT_MAX;
            
            
            if(l1 <= r2 && l2 <= r1)
                  return max(l1, l2);
             else if(l1 > r2){
                  high = cut1 - 1;
            }
            else{
                  low = cut1 + 1; 
            }
        }
        
        return 0 ; 
}