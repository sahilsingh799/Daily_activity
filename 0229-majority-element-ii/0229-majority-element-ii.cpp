class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      vector<int>ans;
      unordered_map<int,int>m;
      for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
        if(m[nums[i]]==nums.size()/3+1)ans.push_back(nums[i]);
      } 
      //sort(ans.begin(),nums.end());
      return ans; 
    }
};