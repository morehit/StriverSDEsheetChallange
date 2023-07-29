class MedianFinder {
public:
        priority_queue<int , vector<int> , greater<int>> minHeap ; 
        priority_queue<int > maxheap ; 
        MedianFinder() {
       
        }
    
    void addNum(int num) {

         if(maxheap.size() == 0  || maxheap.top() >= num ){
             maxheap.push(num) ; 
         }
         else{
             minHeap.push(num) ; 
         }

         if(maxheap.size() > minHeap.size() +1 ){
             minHeap.push(maxheap.top()) ; 
             maxheap.pop() ; 
         }
         else if(minHeap.size() > maxheap.size() ){
             maxheap.push(minHeap.top()) ; 
             minHeap.pop() ; 
         } 
    }
    
    double findMedian() {
          if(maxheap.size() == minHeap.size()){
              return maxheap.top() /2.0 + minHeap.top() / 2.0 ; 
          }
          return maxheap.top() ; 
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */