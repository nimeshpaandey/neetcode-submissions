class Solution {
public:
    bool isAnagram(string s, string t) {
      sort(s.begin(), s.end());
      sort(t.begin(), t.end());  
      int ss = s.size();
      int st = t.size();
      bool isA = true;
      if(ss != st){
        isA = false;
      }
      else{
        for(int i = 0; i < ss; i++){
            if(s[i] != t[i]){
                isA = false;
                break;
            }
        }
      }
      return isA;  
    }
};
