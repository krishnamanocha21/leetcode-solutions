class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    
    void solve(int index,vector<int> nums ,int target){
        //first condition if ans match 
        if(target==0){
            ans.push_back(path);
            return;
        }
        //second condition if index or target exceeds
        if(index==nums.size()|| target<0){
            return ;
        }

        path.push_back(nums[index]);
        //this includes the current index that is why target is reduced 
        //also index remains the same
        solve(index,nums,target-nums[index]);
        path.pop_back();
        //this does not includes that is why the target is same as previous
        //also the index is increased by 1
        solve(index+1,nums,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0,candidates,target);
        return ans;
    }
};