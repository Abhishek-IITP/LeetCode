class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0; i<=30 ; i++){
            int value= pow( 2 , i );

            if(value==n){
            return true;
        }
         
        }
        return false;
        
        
    }
};