bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(int i : nums){
            if(!st.insert(i).second)return true; 
        }  
        return false;
        
    }

/*
s1.insert(i) tries to add the element i into the set s1.
The insert function returns a pair:
 .first is an iterator pointing to the element in the set.
 .second is a boolean that is
- true if the element was successfully inserted (meaning i wasn’t in the set before)
- false if the element was already there (so insertion didn’t happen).

*/
