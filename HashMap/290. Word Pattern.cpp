//1st Solution

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        //for the one to one maping 
        unordered_map<char ,string> chartoword;
        unordered_map<string,char> wordtochar;

        int index=0;
        for(char ch:pattern){
            //check words end;
            if (index>=s.size())return false;

            string word="";
            //word added
            while(index < s.size() && s[index] != ' '){
                word +=s[index];
                index++;
            }
            //this will skip the space
            index++;

            //first check will check if it is already present and second check will see if it is equal or not 
            
            if(chartoword.count(ch)){
                if(chartoword[ch]!=word)return false;
            }else{
                chartoword[ch]=word;
            }

            if(wordtochar.count(word)){
                if(wordtochar[word]!=ch)return false;
            }else{
                wordtochar[word]=ch;
            }
        }
        //see if ther are some extra words are left
        if(index<s.size())return false;
        return true;

    }
};


//2nd solution
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        //for the one to one maping 
        unordered_map<char ,string> chartoword;
        unordered_map<string,char> wordtochar;

        stringstream ss(s);
        string word;

        
        for(char ch:pattern){
            // If there are fewer words than pattern characters
            if (!(ss >> word))
                return false;

            //first check will check if it is already present and second check will see if it is equal or not 

            if(chartoword.count(ch)){
                if(chartoword[ch]!=word)return false;
            }else{
                chartoword[ch]=word;
            }

            if(wordtochar.count(word)){
                if(wordtochar[word]!=ch)return false;
            }else{
                wordtochar[word]=ch;
            }
        }
        // If there are extra words left
        if (ss >> word)
            return false;

        return true;

    }
};