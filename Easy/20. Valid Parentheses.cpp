class Solution {
public:
    bool isValid(string s) {
        stack<char>st; //dynamically size as vector
        for(char c:s) //for each char in s
        {
             if(c=='{' || c=='(' || c=='[')
              st.push(c);
              else{
                if(st.empty()) return false;
                char top=st.top();
                if(c=='}' && top!='{' ||
                c==']' && top!='[' ||
                c==')' && top!='('
                ) return false;
                 st.pop();
              }
        }
     return st.empty();
    }
};