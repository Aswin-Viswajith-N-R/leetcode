class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int even_count=0;
        for(int i=0;i<n;i++)
        {
            int temp = nums[i];
            int count = 0;
            while(temp > 0)
            {
                count+=1;
                temp/=10;
            }
            if(count%2 == 0)
            {
                even_count += 1;
            }
        }
        return even_count;
    }
};