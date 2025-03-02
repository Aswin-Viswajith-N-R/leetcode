class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mpp;
        int max = -1;
        for(auto i : arr)
        {
            mpp[i]++;
        }
        for(auto i : mpp)
        {
            if(i.first == i.second && i.second > max)
            {
                max = i.first;
            }
        }
        return max;
    }
};