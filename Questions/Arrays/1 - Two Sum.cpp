vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i<nums.size() ; i++){
            int complement = target - nums[i]; //calculate the number required for them to add upto target.
            if(mp.find(complement)!=mp.end()){ //if complement found in array, return their indices
                return {mp[complement],i};
            }
            mp[nums[i]] = i; // if not found, store index and value of element in map
        }
        return {};
    }
