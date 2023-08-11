#include <bits/stdc++.h> 

string commonPrefix(vector<string>& arr,int n){

	sort(arr.begin() , arr.end() ) ; 
    
	int m =0 ; 
	for(int i =0 ; i< n ; i++ ){
		int temp = arr[i].size(); 
		m = max(m , temp) ; 
	}

	string ans = "" ; 

	for(int i =0 ; i< m  ; i++ ){
		if(arr[0][i] != arr[n-1][i]){
			break; 
		}
		ans += arr[0][i] ; 
	}
    if(ans.size() == 0 )ans = "-1" ; 

	return ans ; 
}
