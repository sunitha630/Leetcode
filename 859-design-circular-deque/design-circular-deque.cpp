class MyCircularDeque {
public:
    deque<int>glob;
    int k_glob;
    MyCircularDeque(int k) {
       k_glob=k;
    }
    
    bool insertFront(int value) {
        if(glob.size()>=k_glob){
            return false;
        }
        glob.push_front(value);
        return true;
    }
    
    bool insertLast(int value) {
        if(glob.size()>=k_glob){
            return false;
        }
        glob.push_back(value);
        return true;
    }
    
    bool deleteFront() {
        if(glob.size()==0){
            return false;
        }
        glob.pop_front();
        return true;
    }
    
    bool deleteLast() {
        if(glob.size()==0){
            return false;
        }
        glob.pop_back();
        return true;
    }
    
    int getFront() {
        if(glob.size()==0){
            return -1;
        }
        return glob.front();
    }
    
    int getRear() {
        if(glob.size()==0){
            return -1;
        }
        return glob.back();
    }
    
    bool isEmpty() {
        if(glob.size()==0){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(glob.size()==k_glob){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */