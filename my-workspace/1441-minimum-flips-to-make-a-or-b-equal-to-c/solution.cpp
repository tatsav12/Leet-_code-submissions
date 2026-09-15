class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count  = 0;
        while(a!=0||b!=0||c!=0){
            if((a%2|b%2)==c%2){
                a = a/2;b = b/2; c/=2;
                continue;
            }else{
                if(a%2==b%2 && (a%2|b%2==1)){
                    count+=2;
                }else count++;
            }
           a = a/2;b = b/2; c/=2; 
        }
        return count;
    }
};
