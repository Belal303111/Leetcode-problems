class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        int i=0;
        while(i<s.size())
        {
            if(isalnum(s[i]))
                str+=tolower(s[i]);
            i++;
        }
        int j=0,k=str.size()-1;
        while(j<k)
        {
            if(str[j]!=str[k])
                return false;
                j++;
                k--;
        }
        return true;
    }
};
// Using to buildin functions --> isalnum(char) to excludes the special characters
// and tolowr(char) to convert character to the lower case