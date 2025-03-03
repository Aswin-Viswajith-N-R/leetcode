class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>>res;
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            for(int j=0;j<m;j++)
            {
                v.push_back(matrix[j][i]);
            }
            res.push_back(v);
        }
        return res;
    }
};