class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i=left;i<=right;i++)
        {
            int temp = i,flag=0;
            while(temp > 0)
            {
                int rem = temp%10;
                if(rem==0)
                {
                    flag=1;
                }
                else if(i%rem!=0 )
                {
                    flag=1;
                }
                temp/=10;
            }
            if(flag == 0)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};