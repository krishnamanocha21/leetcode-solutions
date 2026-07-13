class Solution {
public:
    vector<string> ans;
    //this is <char,string> because of the input is string is 
    unordered_map<char, string> mp{
    {'2',"abc" },
    {'3',"def" },
    {'4', "ghi"},
    {'5',"jkl" },
    {'6',"mno" },
    {'7',"pqrs" },
    {'8',"tuv" },
    {'9',"wxyz" }
    };
    string curr="";

    //i am taking the example of "23"
    void solve (int index, string digits){
        string letters=mp[digits[index]];
        //this is used when the number size gets equal to the legth of ans
        if(digits.size()==index){
            ans.push_back(curr);
            return;
        }

        //for covering every case inside the every number "initally 2" 
        for(int i=0;i<letters.size();i++){
            //this will include the current char of 2 number in "23"
            curr.push_back(letters[i]);
            //covering next number which is 3 and it run for the same loop like this and cover all "def" in 3
            solve(index+1,digits);
            //this case also help to have the case without the current letter 
            //for example when "2-> a -> done " so then pop a and run the loop for b and then c
            curr.pop_back();
        }
        
    }

    vector<string> letterCombinations(string digits) {
         // i have called only for the 0 index or 2 number in "23"
        solve(0,digits);
        return ans;
    }
};