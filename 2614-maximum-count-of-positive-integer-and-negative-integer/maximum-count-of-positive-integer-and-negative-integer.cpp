class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > 0)
            {
                pos+=1;
            }
            if(nums[i] < 0)
            {
                neg += 1;
            }
        }
        return max(pos,neg);
    }
};