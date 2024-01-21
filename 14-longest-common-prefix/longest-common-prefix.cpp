class Solution {
public:

    string Compare(string a , string b)
    {
        int len = min(a.size(),b.size());

        for(int win_size=len ;win_size>=0;win_size--)
        {
            if(a.substr(0,win_size) == b.substr(0,win_size) )
            return a.substr(0,win_size);
        }
        return "";
    }

    string longestCommonPrefix(vector<string>& strs) {

        map <string,int> str;
        string check = strs[0];
        int str_min = INT_MAX;
        for(int i = 0;i < strs.size();i++){
            if(strs[i].size() < str_min){
                str_min = strs[i].size();
            }
        }
        for(int i = 1;i < strs.size();i++){
            check = Compare(check,strs[i].substr(0,str_min));
        }
        return check;

        
    }
};