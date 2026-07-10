
//self done but take -> 34 sec as runtime
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        //pushing the differnece and the answer in the pq
        priority_queue<pair<int,int>> pq;
        for(int num:arr){
            int  diff=abs(num-x);
            pq.push({diff,num});

            if(pq.size()>k){
                pq.pop();
            }
        }

        //for returning the answer
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};


//with the hints took 11 sec
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        //first the binary search to find the x element 
        int high=arr.size()-1;
        int low=0;
        while(high>=low){
            int mid=low+(high-low)/2 ;
            
            if( arr[mid]<x)low=mid+1;
            else{
                high=mid-1;
            }
        }
        //ERROR-> do not declare the errors inside the loop
        int l=high;  //also the low will store the element equal to or just greater than the x
        int r=low;   //also the high will store the element equal to or just lesser than the x

        //the loop will continue till all the k elemts are filled 
        //same as writing till k>0 
        while (k--){
            

            //if left elemnt finises then push the right one
            if(l<0){
                ans.push_back(arr[r]);
                r++;continue;
            }
            //if right elemnt finises then push the left one
            if(arr.size()<=r){
                ans.push_back(arr[l]);
                l--;continue;
            }
            

            //the main comparision operator
            if(abs(arr[l]-x)>abs(arr[r]-x)){
                //so push the right as it is close
                ans.push_back(arr[r]);
                r++;
            }
            else{
                ans.push_back(arr[l]);
                l--;
            }
            
        }
        

        sort(ans.begin(), ans.end());
        return ans;
    }
};