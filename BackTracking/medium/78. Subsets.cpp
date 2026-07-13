class Solution {
public:
//this should be declared globally
    vector<vector<int>> ans;
    vector<int> path;

    // function defination is allowed here not inside the function
    void solve(int index, vector<int>& nums) {
        // index will give the current element we are deciding about
        if (index == nums.size()) {
            ans.push_back(path);
            return;
        }

        // basic backtrack syntax
        path.push_back(nums[index]);
        solve(index + 1, nums);
        path.pop_back();
        solve(index + 1, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        //calling the backtrack function
        solve(0, nums);
        return ans;
    }
};