class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        string s="";
        while(n>0){
            s=to_string(n%2)+s;
            n/=2;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
            count++;
            }
           // count++;
        }
        return count;
    }
};