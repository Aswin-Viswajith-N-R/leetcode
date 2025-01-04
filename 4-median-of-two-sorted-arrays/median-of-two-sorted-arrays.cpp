class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<double>res;
        for(int i=0;i<n1;i++)
        {
            res.push_back(nums1[i]);
        }
        for(int i=0;i<n2;i++)
        {
            res.push_back(nums2[i]);
        }
        sort(res.begin(),res.end());
        int n = res.size();
        if(n%2==1)
        {
            return res[n/2];
        }
        else{
            return (res[n/2]+res[n/2-1])/2;
        }
    }
};