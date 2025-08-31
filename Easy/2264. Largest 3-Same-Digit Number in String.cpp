class Solution {
public:
    string largestGoodInteger(string num) {
       int i=0,max=-1;
       while(i<num.size()-2)
       {
         int m=-1;
        if(num[i]==num[i+1] && num[i]==num[i+2])
        {
          int n=num[i] - '0';
            m+=n*100 + n*10 +n+1;
        }
        if(m>max) max=m;
        i++;
       }
       if(max==-1) return "";
       if(max==0) return "000";
       string val="";
       for(int j=0;j<3;j++)
       {
        val+=max%10 +'0';
       }
       return val;
    }
};