
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int , int> mp;

        int left =0;
        int ans=0;
        for (int right=0;right <s.size();right++){
            char ch =s[right];
            //we are storing the key as the word and the value as the index at which is repeating 
            // <repeat_word, index_numb> 
            if(mp.count(ch) && mp[ch]>=left ){
                left=mp[ch]+1;
            
            }

            mp[ch]= right; //which is the index
            ans =max(ans, right-left+1);


        }
        return ans;
    }
};