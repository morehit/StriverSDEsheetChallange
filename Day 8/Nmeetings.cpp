
struct meeting {
    int start ; 
    int end ; 
    int pos ; 
};

bool comparator(struct meeting s1 , meeting s2){
    if(s1.end < s2.end){
        return true ; 
    }
    else if(s1.end > s2.end){
        return false ; 
    }
    else if(s1.pos < s2.pos){
        return true ; 
    }
    
    return false ; 
}
int maximumMeetings(vector<int> &start, vector<int> &end)
{ 
        int n = start.size() ; 
        struct meeting meet[n] ; 
        
        for(int i =0 ; i< n ; i++ ){
            meet[i].start = start[i] ; 
            meet[i].end = end[i] ; 
            meet[i].pos = i+1 ; 
        }
        sort(meet , meet + n , comparator) ; 
        
        vector<int> ans ; 
        ans.push_back(meet[0].pos) ; 
        int lastmeet = meet[0].end ; 
        
        for(int i = 1  ; i< n ; i++ ){
            if(meet[i].start > lastmeet){
                ans.push_back(meet[i].pos); 
                lastmeet = meet[i].end ; 
            }
        }
        
        return ans.size() ;
}