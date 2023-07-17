class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          unordered_map<char , int> mp ; 
          int maxlen = 0 ; 
          int l = 0, r =0 ; 

          while(r < s.size() ){
               if(mp.find(s[r]) != mp.end())
                    l = max(l , mp[s[r]] +1 ) ; 
               
              mp[s[r]] = r ; 
              maxlen = max(maxlen , r - l +1 ) ; 
              r++ ; 
          }

          return maxlen ; 
    }
};