//using stacks

string removeDuplicates(string s) {
        stack<char>st;
        for(char ch : s){
            if(!st.empty()&& ch==st.top()){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string result = "";
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
        
    }

//using strings as stacks

string removeDuplicates(string s) {
    string st;
    for (char ch : s) {
        if (!st.empty() && st.back() == ch)
            st.pop_back();
        else
            st.push_back(ch);
    }
    return st;
}
