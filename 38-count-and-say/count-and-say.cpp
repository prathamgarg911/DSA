class Solution {
public:
    string getString(char x)
{
    string s(1, x);
 
    return s;   
}
    string solve(string s)
    {
        string ans = "";
        int n  = s.length(),sum=1;
        cout<<s<<endl;
        for(int i=0;i<n;i++)
        {   

            if(s[i]==s[i+1])
            {
                sum++;
            }

            else if (s[i]!=s[i+1])
            {
             ans = ans + to_string(sum) +  getString(s[i]); 
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