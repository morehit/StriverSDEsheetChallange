vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    unordered_map<int,int> mp ; 

    for(int i =0 ; i< n ; i++ ){
        mp[arr[i]]++ ; 
    }

    priority_queue< pair<int,int>>  pq ; 

    for(auto it: mp ){
        int cnt = it.second ; 
        int num = it.first ; 

        pq.push({cnt , num }) ; 
    }
    vector<int>ans ; 
    int i = 1;

    for(int i =0 ; i< k ; i++ ){
        ans.push_back(pq.top().second) ; 
        pq.pop() ; 
    }
     return ans ; 
}