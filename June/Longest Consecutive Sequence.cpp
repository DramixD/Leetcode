class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int maxLong=1, currentLong=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1)
                currentLong++;
            else if(nums[i+1]-nums[i]>1){
                if(currentLong>maxLong)
                    maxLong=currentLong;
                currentLong=1;
            }
        }
        if(currentLong>maxLong)
            maxLong=currentLong;
        return maxLong;
    }
};
