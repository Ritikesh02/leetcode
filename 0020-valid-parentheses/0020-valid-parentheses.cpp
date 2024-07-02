class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
       
        stack <char> result;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                result.push(s[i]);
            }
            else
            {
                if(result.empty())
                {
                    return false;// means no matching
                }
            

            char ele = result.top();
            if((ele=='(' && s[i]==')') ||
            (ele=='{' && s[i]=='}') ||
            (ele=='[' && s[i]==']') )
            {
                result.pop();
            }
            else
            {
                return false;
            }}

        }
        return result.empty();
        
    }
};