class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(!dq.empty() && dq.front()==i-k) dq.pop_front(); //out of bounds
            while(!dq.empty() && nums[dq.back()]<=nums[i]) dq.pop_back();  //remove smaller elements
            dq.push_back(i);
            if(i>=k-1) ans.push_back(nums[dq.front()]);    //out of window size

        }
        return ans;

    }
};