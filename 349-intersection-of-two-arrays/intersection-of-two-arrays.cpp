class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(),n2=nums2.size();
        vector<int>res;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(nums1[i] == nums2[j])
                {
                    auto it = find(res.begin(),res.end(),nums1[i]);
                    if(it==res.end())
                    {
                        res.push_back(nums1[i]);
                    }
                }
            }
        }
        return res;
    }
};