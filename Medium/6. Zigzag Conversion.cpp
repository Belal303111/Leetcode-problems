class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> a(numRows);
        int i=0,j=0;
        while(j<s.size())
        {
            a[i]+=s[j];
            if(i==numRows-1)
            {
                while(i>0 && j+1<s.size())
                {
                    j++;
                    i--;
                    a[i]+=s[j];
                }
            }
            i++;
            if (i >= numRows) i = numRows - 1;
            j++;
        }
        string str2="";
        for(int k=0;k<numRows;k++)
         str2+=a[k];
         return str2;
    }
};