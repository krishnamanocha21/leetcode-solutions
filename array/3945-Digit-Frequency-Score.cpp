class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int ,int> freq;

        string str =to_string(n);
        int ans=0;

        for(char c:str){
            int num=c-'0';

            freq[num]++;
        }

        for(auto &it :freq){
            ans+= it.first *it.second;
        }
        return ans;
    }
};