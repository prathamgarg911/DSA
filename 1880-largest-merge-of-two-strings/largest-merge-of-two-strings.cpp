class Solution {
public:
    string largestMerge(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();

        int i = 0, j = 0;
        string ans = "";
        while(i<n && j<m){
            if(word1.substr(i) >= word2.substr(j)){
                ans += word1[i];
                i++;
            }
            else {
                ans += word2[j];
                j++;
            }
        }

        while(i<n){
            ans += word1[i];
            i++;
        }

        while(j<m){
            ans += word2[j];
            j++;
        }

        return ans;
    }
};