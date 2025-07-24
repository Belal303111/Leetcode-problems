class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i=0,j=0;
        int m=matrix.size(),n=matrix[0].size();
        while(i<m && j<n)
        {
            int k=i,f=j;
            while(k+1<m && f+1<n)
            {
                if(matrix[k][f]!=matrix[k+1][f+1]) return false;
                k++;
                f++;
            }
            j++;
            if(j==n && i<m)
            {
                j=0;
                i++;
            }
        }
        return true;
    }
};