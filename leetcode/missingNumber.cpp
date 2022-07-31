class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int miss;
        for(int i = 0; i < nums.size();i++){
            if(nums.at(i) == i){
            miss = miss +1;
        }else{
                return i;
            }
        }
         return miss;
    }
};
