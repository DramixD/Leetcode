//Given an array of non-negative integers nums, you are initially positioned at the first index of the array.
//Each element in the array represents your maximum jump length at that position.
//Your goal is to reach the last index in the minimum number of jumps.
//You can assume that you can always reach the last index.

class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> v(nums.size(), 0);
        for(int i=0;i<nums.size()-1;i++){
            for(int j=1;j<=nums[i];j++){
                if(i+j>nums.size()-1)
                    break;
                if(v[i+j]==0)
                    v[i+j]=v[i]+1;
                else
                    v[i+j]=min(v[i]+1,v[i+j]);
                
            }
        }
        
        
        return v[v.size()-1];
    }
};
