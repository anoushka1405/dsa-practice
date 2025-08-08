 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        for(string st : strs){
            string s1 = st;
            sort(s1.begin(),s1.end());
            mp[s1].push_back(st);

        }
        vector<vector<string>>result;
        for(auto& pair : mp){
            result.push_back(pair.second);
        }
        return result;
        
    }

/*
Key Idea - the alphabetically first anagram acts as key
*/
