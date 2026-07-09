class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //we have use 2 maps this for one to one mapping
        unordered_map<char , char > smp;  //assign ch1->for ch2
        unordered_map<char, char> tmp;    //assign ch2->for ch1

        for(int i=0;i<s.size();i++){
            char ch1=s[i] ,ch2=t[i];

            if(smp.count(ch1)&& smp[ch1]!=ch2){
                return false;
            }
            //means if ch2 is assigned but it is not equal;
            if(tmp.count(ch2) &&tmp[ch2]!=ch1){
                return false;
            }

            smp[ch1]=ch2;
            tmp[ch2]=ch1;
        }
        return true;
    }
};