class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //hashMap+heap question

        unordered_map<int ,int>freq;
        //hashmap filling 
        vector<int> ans;
        for(int num:nums){
            freq[num]++;
        }

        //priority needed
        priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int ,int>>> pq;

        //pq filling
        for(auto it :freq){
            pq.push({it.second,it.first});

            if(pq.size()>k){
                pq.pop();
            }
        }

        //ans validating for returning
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};