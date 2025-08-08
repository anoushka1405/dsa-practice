class MyStack {
public:
    queue<int> q1;  // main queue
    queue<int> q2;  // helper queue
    MyStack() {

    }
    
    void push(int x) {
        q1.push(x);
        
    }
    
    int pop() {
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int res = q1.front();
        q1.pop();
        swap(q1,q2);
        
        return res;
        
    }
    
    int top() {
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int res = q1.front(); //top element
        q1.pop();
        q2.push(res);
        swap(q1,q2);
        return res;
        
    }
    
    bool empty() {
        return q1.empty();
    }
};
