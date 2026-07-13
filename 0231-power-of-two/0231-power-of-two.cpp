class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)return 1;
        if(n==0||n<0 )return 0;
        // n=abs(n);
        while(n>1){
            //quo
            if(n%2!=0) return false;
            n=n/2;
        }
        return true;
    }
};