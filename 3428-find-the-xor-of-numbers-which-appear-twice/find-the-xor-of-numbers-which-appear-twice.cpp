class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int x_or = 0;
        for(auto i : nums)
        {
            mpp[i]++;
            if(mpp[i] == 2)
            {
                x_or ^= i;
            }
        }
        return x_or;
    }
};