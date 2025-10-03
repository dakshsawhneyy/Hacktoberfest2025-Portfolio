class Solution {
    // Running both because expanding both and then calculating size so none matters 
public:
    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0; i<s.size(); i++){

            // Odd Length Palindrome
            int j = i; int k = i;
            while(j >= 0 && k < s.size() && s[j] == s[k]){
                if(ans.size() < k-j+1){
                    ans = s.substr(j, k-j+1);
                }
                j--;
                k++;
            }

            // Even Length Palindrome
            j = i; k = i+1;
            while(j >= 0 && k < s.size() && s[j] == s[k]){
                if(ans.size() < k-j+1){
                    ans = s.substr(j, k-j+1);
                }
                j--;
                k++;
            }

        }
        return ans;
    }
};
