class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector<int>res;
        res.push_back(first);
        int prev = first;
        for(int i=0;i<n;i++)
        {
            res.push_back(prev ^ encoded[i]);
            prev = res[i+1];
        }
        return res;
    }
};