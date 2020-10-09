import java.util.Stack;

class MyQueue {

    public Stack<Integer> q;

    /** Initialize your data structure here. */
    public MyQueue() {
        this.q = new Stack<Integer>();
    }
    
    /** Push element x to the back of queue. */
    public void push(int x) {
        int[] placeholder = new int[q.size() + 1];
        placeholder[q.size()] = x;
        for(int i = 0; i < placeholder.length - 1; i++){
            placeholder[i] = q.pop();
        }
        for(int i = placeholder.length - 1; i >= 0; i--){
            this.q.push(placeholder[i]);
        }
        System.out.println(this.q.toString());
    }
    
    /** Removes the element from in front of queue and returns that element. */
    public int pop() {
        return q.pop();
    }
    
    /** Get the front element. */
    public int peek() {
        return q.peek();
    }
    
    /** Returns whether the queue is empty. */
    public boolean empty() {
        return this.q.empty();
    }

    public static void main(String[] args){
        MyQueue m1 = new MyQueue();
        System.out.println(m1.empty());
        m1.push(0);
        m1.push(1);
        System.out.println(m1.peek());
        m1.push(2);
        System.out.println(m1.peek());
        System.out.println(m1.pop());
        System.out.println(m1.peek());

        MyQueue m2 = new MyQueue();
        m2.push(1);
        int p1 = m2.pop();
        int p2 = m2.peek();
        boolean p3 = m2.empty();
        System.out.println(p1 + ", " + p2 + ", " + p3);
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */