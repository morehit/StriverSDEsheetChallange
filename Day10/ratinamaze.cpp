bool isSafe(int nx ,int ny , int n , vector<vector<bool>> &vis , vector<vector<int>> &m){
        if(nx >=0 && nx< n && ny >=0 && ny <n && vis[nx][ny] == false && m[nx][ny] == 1){
            return true ; 
        }
        return false ; 
    }
void solve(int x , int y , vector<vector<int>> &m, int n,  vector<string> &ans , vector<vector<bool> > &vis , string path){
         if(x == n-1 && y == n-1 ){
             ans.push_back(path) ; 
             return ; 
         }
         
         
         vis[x][y] = true ; 
         
         //down 
         int newx = x+1 ; 
         int newy = y ; 
         
         if(isSafe(newx , newy , n , vis , m )){
             path += 'D' ; 
             solve(newx , newy , m ,n , ans , vis , path) ; 
             path.pop_back() ; 
         }
         
         //up
          newx = x-1 ; 
          newy = y ; 
         
         if(isSafe(newx , newy , n , vis , m )){
             path += 'U' ; 
             solve(newx , newy , m ,n , ans , vis , path) ;
             path.pop_back() ; 
         }
         
         //right
         newx = x; 
         newy = y+1; 
         
         if(isSafe(newx , newy , n , vis , m )){
             path += 'R' ; 
             solve(newx , newy , m ,n , ans , vis , path) ; 
             path.pop_back() ; 
         }
         
         //left 
         newx = x; 
         newy = y-1 ; 
         
         if(isSafe(newx , newy , n , vis , m )){
             path += 'L' ; 
             solve(newx , newy , m ,n , ans , vis , path) ; 
             path.pop_back() ; 
         }
         
         vis[x][y] = false ; 
         
    }
vector<string> ratMaze(vector<vector<int>> &m) {
        int n = m.size() ; 
        vector<vector<bool> > vis (n, vector<bool> (n,0)) ; 
        vector<string> ans ; 
        string path ="" ; 
        
        if(m[0][0] == 1) solve(0 , 0 , m , n , ans , vis , path) ; 
        
        return ans ;
}