class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int ,int >freq;
        int ans=0;
        for (int i=0;i< nums.size();i++){
            if(freq.count(nums[i])){
                ans+=freq[nums[i]];
            }
            freq[nums[i]]++;
        }
        return ans;
    }
};