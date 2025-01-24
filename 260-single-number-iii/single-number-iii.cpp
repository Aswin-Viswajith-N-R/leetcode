class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto i : mpp)
        {
            if(i.second == 1)
            {
                res.push_back(i.first);
            }
        }
        return res;
    }
};