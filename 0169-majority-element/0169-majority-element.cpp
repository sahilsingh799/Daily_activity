class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>m;
        // for(auto x: nums){
        //     m[x]++;
        // }
        // for(auto a: m){
        //     if(a.second>nums.size()/2)return a.first;
        // }
        // return 0;
        
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};