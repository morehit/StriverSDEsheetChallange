#include <bits/stdc++.h> 

void heapify(vector<int> &v , int i){
    int smallest = i;
    int left = 2*i+1; 
    int right = left + 1;

 

    if(left <v.size() && v[left] < v[smallest]){
        smallest = left;
    }

    if(right < v.size() && v[right] < v[smallest]){
       smallest = right;
    }

    if(smallest != i){
       swap(v[smallest], v[i]);
       heapify(v, smallest);
    }

}
void insert(vector<int> &heap , int element){
     heap.push_back(element) ; 

     if(heap.size() == 1 ){
         return ; 
     }
     int idx = heap.size() -1 ; 

     while(idx > 0 ){
         int pi = (idx-1)/2 ; 
         if(heap[pi] > heap[idx]){
             swap(heap[pi] , heap[idx]); 
             idx = pi ; 
         }
         else break ; 
     }
}

int removeTop(vector<int> &heap , int size) {
    int ans =-1 ; 
    
    if(heap.size() == 0 )return ans ; 
    
    ans = heap[0] ; 

    if(heap.size() == 1 ){
        heap.pop_back() ; 
        return ans ; 
    }

    heap[0] = heap[heap.size()- 1 ] ; 
    heap.pop_back() ; 
    heapify(heap, 0 ) ; 
    


    return ans ; 
}
vector<int> minHeap(int n, vector<vector<int>>& q) {
    vector<int> heap ; 
    vector<int> ans ; 
    int size = 0 ; 
    for(int i =0 ; i< n ; i++ ){
        if(q[i][0] == 0 ){ 
            insert(heap , q[i][1]) ; 
        }
        else {
             ans.push_back(removeTop(heap, size)); 
        }
    }


    return ans ; 
}
