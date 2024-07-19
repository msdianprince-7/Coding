class Solution {
public:
    bool isalpha(char c)
    {
        return (('A'<=c and c<='Z')||('a'<=c and c<='z')||('0'<=c and c<='9'));
    }

    bool isPalindrome(string s) {
        int n = s.size();
        int l=0,r=n;

        while(l<=r)
        {
            while(l<r && !isalpha(s[l]))
            {
                l++;
            }
            while(r>l && !isalpha(s[r]))
            {
                r--;
            }

            if(tolower(s[l])!=tolower(s[r])) return false;
            
            l++;
            r--;
        }
        return true;
        }
    
};