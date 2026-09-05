class MyQueue {
public:
 stack<int> st;
  stack<int> H;
    MyQueue() {
        
    }
    
    void push(int x) {// o(n);
        st.push(x);
    }
    
    int pop() {  // remove at buttom
       while(st.size()>0){
        H.push(st.top());
         st.pop();
       } 
       int x=H.top();
        H.pop();
          while(H.size()>0){
        st.push(H.top());
         H.pop();
       }
       return x; 
    }
    
    int peek() {
         while(st.size()>0){
        H.push(st.top());
         st.pop();
       } 
       int x=H.top();

          while(H.size()>0){
        st.push(H.top());
         H.pop();
       }
       return x;   
    }
    
    bool empty() {
       if(st.size()==0) return true;
         else return false; 
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