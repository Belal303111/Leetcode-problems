class Solution {
public:
    int secondHighest(string s) {
        int largest=0;
        vector<int>m;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                int n=s[i]- '0';
                m.push_back(n);
                if(n>largest) largest=n;
            }
        }
        int second_largest=-1;
        for(int i=0;i<m.size();i++)
        {
            if(m[i]>second_largest && m[i]!=largest)
                second_largest=m[i];
        }
        return second_largest;
    }
};
//New buildin function used -> isdigit(char) to check if the character is digit or not