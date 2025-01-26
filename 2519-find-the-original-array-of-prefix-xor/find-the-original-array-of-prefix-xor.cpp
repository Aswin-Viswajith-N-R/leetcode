class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        int previous = pref[0];
        for(int i=1;i<n;i++)
        {
            pref[i] ^= previous;
            previous ^= pref[i];
        }
        return pref;
    }
};