bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false; //If different sizes of strings they cannot be anagrams
        unordered_map<char,int>mp;
        for(char c : s){
            mp[c]++; //record characters and their frquencies in string s
        }
        for(char c : t){
            if(mp.find(c)==mp.end()||mp[c]==0){ //if a character in c found in t but not s or mp[c]==0(taking care of duplicates) then return false
                return false;
            }
            mp[c]--; //To take care of duplicates in strings
        }
        return true;      
    }
