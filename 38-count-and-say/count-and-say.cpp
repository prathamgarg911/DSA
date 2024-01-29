class Solution {
public:
    string solve(string s)
    {
        string ans = "";
        int n  = s.length(),sum=1;
        for(int i=0;i<n;i++)
        {   
            if(s[i]==s[i+1])
            {
                sum++;
            }
            else if (s[i]!=s[i+1])
            {
             ans = ans + to_string(sum) +  s[i]; 
             sum=1;
            }   
        }
        return ans;
    }
    string countAndSay(int n) 
    {
        if(n==1) return "1";
        string s = "1";
        for(int i =0 ; i<n-1 ; i++)
        {
            s = solve(s);
        }
        return s;
    }
};