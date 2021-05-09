//COmp = O(n^2) BruteForce


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       
        for(int i = 0; i<nums.size(); i++){             
            int leftsum = 0;
            int rightsum = 0;
            for(int k = 0;k<=i-1; k++){
                leftsum = leftsum + nums[k];        
              //  cout<<leftsum<<endl;

            }
            for (int j = i+1; j<nums.size();j++){
                rightsum = rightsum + nums[j];
            //    cout<<rightsum<<endl;
            }
            cout<<leftsum<<" "<<rightsum<<endl;
            if(leftsum == rightsum){
                return i;
            }
            
        }
        return -1;
        
    }
};

/*
    ip = vector<int> &nums
    op = int
    constraints 
    sample
    
    pseudocode
    
    int pivotInd(nums){
        int leftsum = 0
        int rightsum = 0
        for(int i = 0; i<nums.size(); i++){
            at i left = 0 right sum of i+1 to size-1
                if left == right
                return i
            at i+1 , left = left + (i+1) , right = right - (i+1)
                left == right
                return i
        }
        return ans;
    }


*/
