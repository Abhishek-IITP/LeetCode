class MyCircularQueue {
private:
    vector<int> vec;
    int head;
    int count;
    int maxSize;

public:
    MyCircularQueue(int k) {
        vec.resize(k);
        head = 0;
        count = 0;
        maxSize = k;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
    vec[(head + count) % maxSize] = value;
    count++;    
        return true;
    }
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        head = (head + 1) % maxSize;
        count--;
        return true;

    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return vec[head];
        
    }
    
    int Rear() {

        if(isEmpty()){
            return -1;
        }
        return vec[(head+count -1) %maxSize];
        
    }
    
    bool isEmpty() {
        return count == 0;
        
    }
    
    bool isFull() {
        return count == maxSize;
        
    }
};