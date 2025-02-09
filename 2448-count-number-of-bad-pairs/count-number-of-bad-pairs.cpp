class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long goodPairs = 0, n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            int key = nums[i] - i;
            goodPairs += mpp[key];
            mpp[key]++;
        }
        return (n*(n-1))/2 - goodPairs;
    }
};