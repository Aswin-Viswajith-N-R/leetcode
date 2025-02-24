class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         vector<int>vect1;
        vector<int>vect2;
        vector<vector<int>>res;
        int n1 = nums1.size(),n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
            auto it = find(nums2.begin(),nums2.end(),nums1[i]);
            if(it == nums2.end())
            {
                auto itr = find(vect1.begin(),vect1.end(),nums1[i]);
                if(itr == vect1.end())
                {
                    vect1.push_back(nums1[i]);
                }
            }
        }
        for(int j=0;j<n2;j++)
        {
            auto it = find(nums1.begin(),nums1.end(),nums2[j]);
            if(it == nums1.end())
            {
                auto itr = find(vect2.begin(),vect2.end(),nums2[j]);
                if(itr == vect2.end())
                {
                    vect2.push_back(nums2[j]);
                }
            }
        }
        res.push_back(vect1);
        res.push_back(vect2);
        return res;
    }
};