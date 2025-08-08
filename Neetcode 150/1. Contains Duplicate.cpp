bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i : nums){
            if(mp.find(i)!=mp.end()){
                mp[i]++;
                if(mp[i]>1)return true;
            }
            else{
                mp[i]=1;
            }
        }
        return false;     
    }

//using unordered_set - optimised

unordered_set<int> s1;
for (int i : nums) {
    if (!s1.insert(i).second) return true;
}
return false;