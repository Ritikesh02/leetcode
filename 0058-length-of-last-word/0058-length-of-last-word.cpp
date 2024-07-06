class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int count = 0;
        bool ans = false;
         for(int i=n-1 ; i>=0 ; i--)
         {
              if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
              {
                ans = true;
                count++;
              }
              else
              {
                if(ans==true)
                  return count;
              }
         }
         return count;
        
    }
};