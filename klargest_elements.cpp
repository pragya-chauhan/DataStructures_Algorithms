/*https://www.youtube.com/watch?v=FrWq2rznPLQ


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];           //nlogn
    }
};


*/


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //priority queue is maxheap by default so to change to minheap this declaration
        priority_queue<int,vector<int>,greater<int>> minHeap;
        
        for(int i = 0; i< nums.size(); i++){
            minHeap.push(nums[i]);
            if(minHeap.size()>k){
                minHeap.pop();
            }
        
        }
        return minHeap.top();
    }
};
