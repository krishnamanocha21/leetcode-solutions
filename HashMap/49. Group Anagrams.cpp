class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sorting and then according storing
        unordered_map<string,vector<string>> mp;
        for(string s:strs){
            //making a dulicate which i will sort to store in the map
            string key=s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;

        for(auto & it : mp){
            //making ans ready for the return 
            ans.push_back(it.second);
        }
        return ans;

    }
};