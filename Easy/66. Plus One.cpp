class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n=digits.size();
    digits[n-1]++;
    if(digits[n-1]==10){
        digits[n-1]=0;
        int i=n-2;
     while(i>=0 && digits[i]==9)
     {
        digits[i]=0;
        i--;
     }
     if(i>=0)
     digits[i]++;
     else{
        digits.insert(digits.begin(),1); //insert in new pleace in the begin
     }
    }
    return digits;
    }
};