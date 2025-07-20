int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>broken(brokenLetters.begin(),brokenLetters.end());
        istringstream ss(text); //stream to read words one by one
        string word;
        int count = 0;

        while(ss>>word){
            bool canType = true; //flag to check if word can be typed

        for(char c:word){
            if(broken.count(c)){
                canType = false;
                break;
            }

        }
        if(canType){
            count++;
        }
        
    }
     return count;
    }
