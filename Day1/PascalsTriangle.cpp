class Solution {
public:

    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > Pascal ; 

        for(int i=0  ; i< numRows ; i++ ){
            Pascal.push_back(vector<int> (i+1 , 1 )) ; 
        }
        
        for(int i = 2 ; i< numRows ; i++ ){
             for(int j = 1 ; j <= i-1; j++ ){
                 Pascal[i][j] = Pascal[i-1][j-1] + Pascal[i-1][j] ; 
             }
        }
        return Pascal ; 
    }
};
