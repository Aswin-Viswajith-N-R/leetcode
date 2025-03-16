class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length()<26)
        {
            return false;
        }
        unordered_map<char,int>mpp;
        for(char ch : sentence)
        {
            mpp[ch]++;
        }
        if(mpp.size()<26)
        {
            return false;
        }
        return true;
    }
};