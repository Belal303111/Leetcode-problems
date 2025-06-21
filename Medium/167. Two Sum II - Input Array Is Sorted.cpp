class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int left=0,right=numbers.size()-1;
      vector<int>tow_indecis(2);
      while(left<right)
      {
        int sum=numbers[left]+numbers[right];
        if(sum==target){
            tow_indecis[0]=left+1;
            tow_indecis[1]=right+1;
            return tow_indecis;
        }
        else if(sum>target) right--;
        else left++;
      }
      return tow_indecis;
    }
};