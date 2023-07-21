int calculateMinPatforms(int arr[], int dep[], int n) {
       sort(arr, arr+n ); 
       sort(dep, dep+n) ; 
       
       int i = 0 , j = 0 ; 
       int plat_needed = 0 ; 
       int res = 0 ; 
       while(i< n && j< n ){
           
           if(arr[i] <= dep[j]){
               plat_needed++ ; 
               i++ ; 
           }
           else if(arr[i] > dep[j]){
               plat_needed-- ; 
               j++ ; 
           }
           
           if(plat_needed > res){
               res = plat_needed; 
           }
       }
       
       return res ; 
}