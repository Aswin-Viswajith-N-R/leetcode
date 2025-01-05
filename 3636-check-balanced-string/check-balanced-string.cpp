class Solution {
public:
    bool isBalanced(string num) {
        int odd ,even;
        odd=even = 0;
        int n = num.length();
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                even += (num[i] - '0');
            }
            else{
                odd += (num[i] - '0');
            }
        }
        if(odd == even)
        {
            return true;
        }
        return false;
    }
};