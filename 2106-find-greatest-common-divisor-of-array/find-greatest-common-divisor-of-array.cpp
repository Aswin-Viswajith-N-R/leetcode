class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int gcd;
        int num1 = nums[0],num2=nums[n-1];
        for(int i=1;i<=num1&&i<=num2;i++)
        {
            if(num1%i==0 && num2%i==0)
            {
                gcd = i;
            }
        }
        return gcd;
    }
};