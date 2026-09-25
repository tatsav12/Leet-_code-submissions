class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int st = 0;
        int end = letters.size()-1;
        int ans = 0;

        while(st<=end){
            int mid = st + (end-st)/2;

            if(mid == letters.size()-1 && target>= letters[mid])return letters[0];

            if(letters[mid]<=target){
                st = mid+1;
            }else{
                end = mid-1;
                ans = letters[mid];
            }
        }
        return ans;
    }
};