class Solution {
public:
    bool isPalindrome(string s) {
        bool isP = true;
        string ans = "";
        for(char ch : s) {
            if(isalnum(ch)) {
                ans += tolower(ch);
            }
        }
        int n = ans.size();
        int i = 0;
        int j = n - 1;
        while(j > i){
            if(ans[i] != ans[j]){
                isP = false;
            }
            i++;
            j--;
        }
        return isP;
    }
};
