class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        for(char c: s)
        {
            if(isalnum(c))
            {
                str+=tolower(c);
            }
        }

        string reverseStr = str;

        reverse(reverseStr.begin(),reverseStr.end());
        return reverseStr == str;
    }
};