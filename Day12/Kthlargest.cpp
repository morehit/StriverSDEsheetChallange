#include <bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &nums, int n, int k)
{
	priority_queue<int, vector<int> , greater<int> > pq ; 
    priority_queue<int> minheap ; 

        for(int i =0 ; i< k ; i++){
            pq.push(nums[i]); 
            minheap.push(nums[i]); 
        }

        for(int i =k ; i< nums.size() ; i++ ){
            if(nums[i] > pq.top() ){
                pq.push(nums[i]) ; 
                pq.pop() ; 
            }

            if(nums[i] < minheap.top()){
               minheap.push(nums[i]); 
               minheap.pop() ; 
            }
        }


        return {minheap.top(), pq.top()} ; 
}