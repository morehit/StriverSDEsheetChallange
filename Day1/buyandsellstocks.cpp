class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int minimum = prices[0] ;
         int maxProfit = 0 ;  
            
            for(int i= 1  ; i<  prices.size() ; i++ ){
                int temp = prices[i] - minimum ; 
                maxProfit = max(maxProfit , temp ) ; 

                if(minimum > prices[i]){
                    minimum = prices[i] ; 
                }
            }

        return maxProfit ;
    
    }  
};
