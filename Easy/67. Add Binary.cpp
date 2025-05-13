class Solution {
public:
    string addBinary(string a, string b) {
   string result="";
   int sum=0,curry=0,i=a.length()-1,j=b.length()-1;
   while(i>=0 || j>=0 || curry)
   {
    sum=curry;
    if(i>=0) sum+=a[i] - '0';
    if(j>=0) sum+=b[j] - '0';
    i--;   j--;
    result=sum%2 + '0';
    curry=sum/2;
   }
   reverse(result.begin(),result.end());
return result;
    }
};