class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int ,int> freq;

        for(char ch : magazine){
            freq[ch]++;
        }

        for(char ch:ransomNote){
            //this will check it is 0 or not 
            if(freq[ch]<=0){
                return false;
            }
            freq[ch]--;
        }
        
        return true;
    }
};