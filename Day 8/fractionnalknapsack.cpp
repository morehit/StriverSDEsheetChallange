
bool comp(pair<int,int> p , pair<int,int> q ){
    double r1 = (double)p.second / p.first ; 
    double r2 = (double)q.second / q.first ; 

    return r1 > r2 ; 
}
#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& arr, int n, int W)
{
        sort(arr.begin() , arr.end() , comp) ; 
        double ans = 0.0 ; 
        int curwt = 0 ; 
        
        for(int i =0 ; i< n ; i++ ){
            if(curwt + arr[i].first  <= W  ){
                ans += arr[i].second; 
                curwt += arr[i].first;
            }
            else {
                 double rem = W - curwt ; 
                 ans+= (double) rem *((double)arr[i].second / arr[i].first) ;  ;
                 break; 
            }
        }
        
        return ans ; 
}