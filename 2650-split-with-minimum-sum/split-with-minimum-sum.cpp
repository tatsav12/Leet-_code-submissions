class Solution {
public:
    int splitNum(int num) {
        vector<int> v;
        while(num>0){
            v.push_back(num%10);
            num = num/10;
        }
        int num1 = 0;
        int num2 = 0;
        sort(v.begin(),v.end());
        for(int i = 0;i<v.size();i+=2){
            num1=num1*10 + v[i];
        }
        for(int i = 1;i<v.size();i+=2){
            num2=num2*10 + v[i];
        }
        return num1+num2;
    }
};