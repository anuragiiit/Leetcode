class MyQueue {
        stack<int> s1,s2;
        
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(s1.size())
        {
                int k=s1.top();
                s1.pop();
                s2.push(k);
        }
            s2.push(x);
         while(s2.size())
        {
                int k=s2.top();
                s2.pop();
                s1.push(k);
        }   
    }
    
    int pop() {
            int x=s1.top();
        s1.pop();
            return x;
    }
    
    int peek() {
          int x=s1.top();
            return x;
    }
    
    bool empty() {
        return (s1.size()==0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */