class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="",str2="";
        for(int i=0;i<word1.size();i++)
        {
            string str = word1[i];
            for(int j=0;j<str.length();j++)
            {
                str1 += str[j];
            }
        }
        for(int i=0;i<word2.size();i++)
        {
            string str = word2[i];
            for(int j=0;j<str.length();j++)
            {
                str2 += str[j];
            }
        }
        if(str1.length() != str2.length())
        {
            return false;
        }
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]!=str2[i])
            {
                return false;
            }
        }
        return true;
    }
};