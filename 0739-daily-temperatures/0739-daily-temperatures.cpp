class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<pair<int,int>>st;
        int n=nums.size();
        vector<int>ans (n,0);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[i]>st.top().first){
    int numdays=i-st.top().second;
    ans[st.top().second]=numdays;
    st.pop();
    }
    st.push({nums[i],i});
   }
        return ans;
    }
};