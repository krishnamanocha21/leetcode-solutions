class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int stone:stones){
            pq.push(stone);
        }
        while(pq.size()>1){
            int heaviest=pq.top();
            pq.pop();
            int secondone=pq.top();
            pq.pop();
            //if only both are not same
            if(heaviest != secondone){
            pq.push(heaviest-secondone);
            }
        }

        //remeber to add this if there is no element in the priority queue
        return pq.empty() ? 0:pq.top();

    }
};


