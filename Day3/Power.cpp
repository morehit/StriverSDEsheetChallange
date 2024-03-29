class Solution {
public:
    double myPow(double x, int n) {
        long nn = n ; 
        double ans =1 ; 

        if(nn < 0 ) nn = nn * (-1) ; 
        while(nn > 0 ){
            if(nn % 2 == 1 ){
                ans = ans * x ; 
                nn = nn-1 ; 
            }
            else if(nn %2 == 0 ){
                x = x * x ; 
                nn = nn/2 ; 
            }
        }

        if(n < 0 ) ans = (double)1.0/ ans ; 

        return ans ; 
    }
};
