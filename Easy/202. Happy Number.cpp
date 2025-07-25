class Solution {
public:
    vector<int> sqr(int n)
    {
        vector<int>m;
        while(n>0)
        {
            m.push_back(n%10);
            n/=10;
        }
        return m;
    }
    bool isHappy(int n) {
        vector<int>m;
        unordered_set<int>seen;
        int sum=n;
        m=sqr(n);
        while(sum!=1 && seen.find(sum) == seen.end())
        {
          seen.insert(sum);
           sum=0;
            for(int i=0;i<m.size();i++)
        {
            sum+=m[i]*m[i];
        }
        m=sqr(sum);
        }
        if(sum==1) return true;
        else return false;
    }
};