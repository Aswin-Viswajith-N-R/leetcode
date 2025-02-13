class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long int,vector<long long int>,greater<long long int>>pq;
        int count = 0;
        for(int i : nums)
        {
            pq.push(i);
        }
        while(pq.top() < k)
        {
            long long int first = pq.top();
            pq.pop();
            long long int second = pq.top();
            pq.pop();
            long long int num = 2 * min(first,second) + max(first,second);
            pq.push(num);
            count += 1;
        }
        return count;
    }
};