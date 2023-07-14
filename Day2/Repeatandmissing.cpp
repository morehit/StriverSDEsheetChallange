vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size() ; 
    vector<int> count(n+1 , 0 ); 

	for(int i=0 ; i<n ; i++  ){
		count[A[i]]++ ; 
	}

     int missing , repeating ; 
	for(int i=1 ; i<= n ; i++ ){
        if(count[i] == 2 ){
			repeating = i ; 
		}
		else if(count[i] ==0 ){
			missing = i ; 
		}
	}

	return {repeating,missing};
}
