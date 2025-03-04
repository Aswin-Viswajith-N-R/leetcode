class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mpp;
        int m = grid.size();
        int n = grid[0].size();
        int N = m*n;
        int tot_sum = (N*(N+1))/2;
        int sum = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mpp[grid[i][j]]++;
                sum += grid[i][j];
            }
        }
        vector<int>res;
        for(auto i : mpp)
        {
            if(i.second > 1)
            {
                res.push_back(i.first);
            }
        }
        res.push_back(tot_sum-sum+res[0]);
        return res;
    }
};