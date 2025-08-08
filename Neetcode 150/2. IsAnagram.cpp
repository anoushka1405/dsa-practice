bool isAnagram(string s, string t) {
        unordered_set<char>s1;
        unordered_set<char>s2;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char c : s){
            s1.insert(c);
            mp1[c]++;
        }
        for(char c : t){
            s2.insert(c);
            mp2[c]++;
        }
        if((s1==s2)&&(mp1==mp2))return true;
        return false;
        
    }


//optimised - using one map and differences

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>mp;
        for(char c : s){
            mp[c]++;
        }
        for(char c : t){
            if(mp.find(c)==mp.end()||mp[c]==0){
                return false;
            }
            mp[c]--;
        }
        return true;
    }
};
