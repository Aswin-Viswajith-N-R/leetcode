class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end(),greater<>());
        int i,count = 0;
        for(i=1;i<n;i++)
        {
            if(count == 2)
            {
                return nums[i-1];
            }
            if(nums[i]!=nums[i-1])
            {
                count++;
            }
        }
        if(count == 2)
        {
            return nums[i-1];
        }
        return nums[0];
    }
};