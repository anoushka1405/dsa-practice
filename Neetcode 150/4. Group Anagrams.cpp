 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string s : strs){
            string s1 = s;
            sort(s1.begin(),s1.end());
            mp[s1].push_back(s);
        }
        vector<vector<string>>result;
        for(auto& pair : mp){
            result.push_back(pair.second);
        }

        return result;

    }