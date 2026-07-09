class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int> > pq;
        //in the pair push first the comparison is done between the .first and then the .second
        vector<int> ans;

        //pushing in the pq
        for(int i = 0; i < mat.size(); i++){
            int sum=0;
            for(int n:mat[i]){
                sum+=n;

            }
            pq.push({sum,i});
            if(pq.size()>k){
                pq.pop();
            }

        }

        for(int i=0;i<k;i++){
            pair<int, int> p = pq.top();
            
            ans.push_back(p.second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());

return ans;
    }
};