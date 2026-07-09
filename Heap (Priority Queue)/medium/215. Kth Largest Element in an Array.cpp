class Solution {
public:
    //define the struct outside 
    struct smaller{
        bool operator()(const string &a, const string &b){
            //first see if its length bigger then the other string or not 
            if(a.size()!=b.size())
                return a.size()>b.size();
               
            return  a>b;  
        }
    };

    string kthLargestNumber(vector<string>& nums, int k) {
        //remember because of the large number in the string the comparison cannot be done in the string 

        //so we can also make a new custom comparison operator
        priority_queue<string , vector<string> ,smaller > pq;
        
        for(string s:nums){

            pq.push(s);

            if(pq.size()>k){
                pq.pop();
            }
        }
        
        
        
        return pq.top();
    }
};