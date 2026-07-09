class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,int>> pq;
        //to reduce the time complexity we have use storing the index of the vector in the pq only rather thatn the whole vector  
        for(int i=0;i<points.size();i++){
            int distance=(points[i][0]*points[i][0])+(points[i][1]*points[i][1]);

            pq.push({distance, i});

            if(pq.size()>k){
                pq.pop();
            }

        }
        
        vector<vector<int>> ans;
        for(int i=0;i<k;i++){
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }
        return ans;

    }
};