class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //hashmap technique 

        
        for (int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
            int sum=nums[i]+nums[j];
            if (sum==target){
                return {i,j};
                
            }
            }
        }


        
        return {};
    }
};

/*
not work because index number change on sorting

while(j>i){
            int sum =nums[i]+nums[j];

            if(sum==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            else if(sum<target){
                i++;
            }
            else{j--;}

        }
*/