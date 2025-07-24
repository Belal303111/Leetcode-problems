class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i=0,j=1,k=1;
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>>result(n,vector<int>(m));
      for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
         result[j][i]=matrix[i][j];
        return result;
    }
};