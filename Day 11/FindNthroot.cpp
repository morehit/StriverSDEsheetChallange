double multiply(int n , double mid){
  double ans = 1.0 ; 
  for(int i = 1 ; i<= n ; i++ ){
      ans = ans * mid ; 
  }

  return ans ; 
}

int NthRoot(int n, int m) {
     double st = 1 ; 
     double en = m ; 
     double eps = 1e-6;

     while((en-st) > eps ){
       double mid = (st+en)/2.0 ; 

       if( multiply(n,mid) > m ){
          en = mid ; 
       }
       else {
          st = mid; 
       }
     }
     int ans = round(en); 
     
     if(pow(ans, n) == m )return ans ; 
     return -1 ; 
}