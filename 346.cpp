class MovingAverage {
private: 
        queue<int>q;
        int maxSize;
        double runningSum;

public:
    MovingAverage(int size) {
        maxSize = size;
        runningSum =0;
        
    }
    
    double next(int val) {
        if(q.size()== maxSize){
            runningSum -=q.front();
            q.pop();
        }

        q.push(val);
        runningSum = runningSum + val;
        int minVal =  min((int)q.size(),maxSize);

        double result = runningSum /minVal;
        return result;
        
    }
};

