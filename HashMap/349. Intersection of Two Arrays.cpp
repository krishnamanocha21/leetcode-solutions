class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> freq;
        unordered_set <int> ans;
        vector<int> answer;
        for(int num:nums1){
            freq.insert(num);
        }
        for(int num:nums2){
            if(freq.count(num)){
                
                ans.insert(num);
                }
            else{continue;}
        }
        for(auto &it :ans){
            answer.push_back(it);
        }
        return answer;
    }
};

//other solution 

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> freq(nums1.begin(), nums1.end());
        unordered_set <int> ans;
        for(int num:nums2){
            if(freq.count(num)){
                ans.insert(num);
            }
        }
        return vector<int >(ans.begin(),ans.end());
    }
};