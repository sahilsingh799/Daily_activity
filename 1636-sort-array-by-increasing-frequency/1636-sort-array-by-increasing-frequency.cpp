class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int>freq;
        for(auto x: nums){
            freq[x]++;
        }
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto i: freq){
            pq.push({i.second,-(i.first)});
            
        }
        while(!pq.empty()){
            auto f=pq.top();
            for(int i=0;i<f.first;i++)ans.push_back(-f.second);
            pq.pop();
        }
        return ans;

    }
};