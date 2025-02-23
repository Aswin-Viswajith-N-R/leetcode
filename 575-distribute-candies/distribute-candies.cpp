class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_map<int,int>mpp;
        for(auto i : candyType)
        {
            mpp[i]++;
        }
        int count =0;
        for(auto i : mpp)
        {
            count +=1;
        }
        if(count > n/2)
        {
            return n/2;
        }
        return count;
    }
};