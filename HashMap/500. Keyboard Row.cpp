class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> firstrow={'q', 'w', 'e', 'r', 't', 'y','u' ,'i', 'o', 'p', 'Q', 'W', 'E', 'R',
                                     'T', 'Y', 'U', 'I', 'O', 'P'};
        unordered_set<char> secondrow={'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G',
                                      'H', 'J', 'K', 'L'};
        unordered_set<char> thirdrow={'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};

        vector<string> ans;
        for (string str : words) {
            char cur = str[0];
            if (firstrow.find(cur)!= firstrow.end()) {
                bool isans = false;
                for (char ch : str) {
                    if (firstrow.find(ch)== firstrow.end()) {
                        isans = true;
                        break;
                    }
                }
                
                if(!isans){
                    ans.push_back(str);
                }

            } else if (secondrow.find(cur)!= secondrow.end()) {
                 bool isans = false;
                for (char ch : str) {
                    if (secondrow.find(ch)== secondrow.end()) {
                        isans = true;
                        break;
                    }
                }
                if(!isans){
                    ans.push_back(str);
                }
            }
            else{
                 bool isans = false;
                for (char ch : str) {
                    if (thirdrow.find(ch)== thirdrow.end()) {
                        isans = true;
                        break;
                    }
                }
                
                if(!isans){
                    ans.push_back(str);
                }
            }
        }
        return ans;
    }
};