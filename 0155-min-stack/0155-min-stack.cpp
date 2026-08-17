class MinStack {
    private:
    vector<vector<int>>st;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        int min_value=getMin();
        if(st.empty() || min_value > value){
            min_value = value;
        }
        st.push_back({value,min_value });
        
    }

    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.empty()?-1 : st.back()[0];
    
    }
    
    int getMin() {
        return st.empty() ? -1:st.back()[1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */