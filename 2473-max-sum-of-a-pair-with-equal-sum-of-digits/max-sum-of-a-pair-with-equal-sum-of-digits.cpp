class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int maxi = -1;
        for(int i : nums)
        {
            int sum = 0,temp=i;
            while(temp > 0)
            {
                sum += temp%10;
                temp /= 10;
            }
            if(mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi,i+mpp[sum]);
            }
            mpp[sum] = max(mpp[sum],i);
        }
        return maxi;
    }
};