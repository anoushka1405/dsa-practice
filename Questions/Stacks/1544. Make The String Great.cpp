//using string as a stack 
string makeGood(string s) {
     string result = "";
    for(char ch : s){
        if(!result.empty() && abs(result.back()-ch)==32){
            result.pop_back();
        }
        else{
            result.push_back(ch);
        }
    }
    return result;
    }



//using stacks

string makeGood(string s) {
        stack<char> st;
    for(char c : s){
        
        if (!st.empty() && abs(st.top()-c)==32){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    string result = "";
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
    }

