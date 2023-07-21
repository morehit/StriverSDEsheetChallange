#include <bits/stdc++.h> 

struct Jobs{
    int id ; 
    int dead; 
    int profit ; 
}; 

static bool comp(Jobs a1 , Jobs a2){
    return a1.profit > a2.profit ; 
}

vector<int> jobScheduling(vector<vector<int>> &jobs)
{
        int n = jobs.size(); 
        vector<int> ans ; 

        struct Jobs arr[n] ; 

        for(int i =0 ; i< n ; i++ ){
            arr[i].id = i+1 ; 
            arr[i].dead = jobs[i][1];
            arr[i].profit = jobs[i][2]; 
        }
        sort(arr, arr+n , comp) ; 
        
        int maxi = arr[0].dead ; 
        
        for(int i = 1 ; i< n ; i++ ){
            maxi = max(maxi , arr[i].dead) ; 
        }
        
        
        int prof = 0 ; 
        int cnt =0 ; 
        vector<int> deadline(maxi+1, -1) ; 
        
        for(int i =0 ; i< n ; i++ ){
             for(int j = arr[i].dead ; j > 0 ; j--  ){
                 if(deadline[j] == -1 ){
                     deadline[j] = i ; 
                     prof += arr[i].profit ; 
                     cnt++ ; 
                     break; 
                 }
             }
        }
      
        
        return {cnt , prof} ; 
}