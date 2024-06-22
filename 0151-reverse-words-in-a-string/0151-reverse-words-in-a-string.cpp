#include<stack>
#include<bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack <string> result;
        string ans ="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if (!ans.empty()) {
                result.push(ans);
                ans ="";
                }
            }
            else
            {
                ans += s[i];
            }
        }
        if(!ans.empty())
        {
            result.push(ans);
        }
        string ans1="";
        while(result.size()!=1)
        {
            ans1+=result.top()+" ";
            result.pop();
            
        }
        ans1+=result.top();
        return ans1;

    }
};